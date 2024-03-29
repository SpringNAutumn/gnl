/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:03:50 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/29 19:10:21 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
 
char *get_next_line(int fd)
{
	static char	*suboofer;
	char	*boofer;
	int bytesread;

	boofer = malloc(BUFFER_SIZE + 1);
	if (!boofer)
		return NULL;

	boofer[BUFFER_SIZE] = '\0';
	if (suboofer == NULL)
		suboofer = ft_strdup("");
		
	while (!ft_strchr(boofer, '\n'))
	{
		if ((bytesread = read(fd, boofer, BUFFER_SIZE)) <= 0)
			break;
		boofer[bytesread] ='\0';
		// hadles the freeing of the allocatd boofer memory.
		suboofer = ft_strjoin(suboofer, boofer);
	}
	
	char* devolusao = retrieve_line(suboofer);
	suboofer = limpiamos(suboofer);
	return devolusao;
}

char *limpiamos(char *string)
{
    char *devo;
    int i = 0;
    
	// recorremos suboofer.
    while (string[i] != '\n' && string[i] != '\0')
        i++;
	
    if (string[i] == '\0') {
        devo = ft_strdup("");
    } else {
        devo = ft_strndup(string + i + 1 , ft_strlen(string) - (i + 1));
    }
// no estamos liberando la memoria de la variable estática?
	liberasao(&string);
    return devo;
}

char *retrieve_line(char *string)
{	
	int i;

	i = 0;
	char *posicion = ft_strchr(string, '\n');
	char *a_devolver;
	
	if (posicion != NULL)
		a_devolver = malloc((posicion - string) + 1);
	else
		return (string);
	
	while(i < (posicion - string))
	{
		a_devolver[i] = string[i];
		i ++;
	}
	// a_devolver se libera dejando result con memoria alocada dinamicamente sin liberar.
	a_devolver[i] = '\0';
	char *result = ft_strdup(a_devolver);
	free(a_devolver);
	return result;
}
// we need to pass the pointer itsel, the parameter will be a pointer of variable that points 
// to the pointer passed.
char *liberasao(char **aliberar)
{
	free(*aliberar);
	*aliberar = NULL;
	return aliberar;
}
