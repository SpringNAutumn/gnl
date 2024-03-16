/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:03:50 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/16 18:22:50 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char* suboofer;
	
	char* boofer;
	int bytesread;

	bytesread = 0;
	boofer = malloc(BUFFER_SIZE + 1);
	boofer[BUFFER_SIZE] = '\0';
	
	if (!boofer)
		return NULL;

	if (suboofer == NULL)
		suboofer = ft_strdup("");
		
	while (!ft_strchr(boofer, '\n'))
	{
		if ((bytesread = read(fd, boofer, BUFFER_SIZE)) <= 0)
			break;
		boofer[bytesread] ='\0';
		// vamos guardando en suboofer.
		suboofer = ft_strjoin(suboofer, boofer);
	}

	char* devolusao = retrieve_line(suboofer);
	suboofer = limpiamos(suboofer);
	return devolusao;
}

char *limpiamos(char *string)
{
	char *devolucion;
	int i = 0;

	while (string[i] != '\n' && string[i] != '\0')
		i++;
	if (ft_strlen(&string[i]) < 2)
		devolucion = liberasao(&string);
	else
		devolucion  = ft_substr(string, (ft_strchr(string, '\n') - string), ft_strlen(string));
	return devolucion;
}
/*
char *limpiamos(char *string)
{
    char *devolucion;
    int i = 0;

	// recorremos suboofer. 
    while (string[i] != '\n' && string[i] != '\0')
        i++;
		
    if (string[i] == '\0') {
        devolucion = ft_strdup("");
        free(string);
    } else {
        devolucion = &string[i + 1];
    }
    return devolucion;
}

*/

char *retrieve_line(char *string)
{	
	char *posicion = ft_strchr(string, '\n');
	char *a_devolver;
	
	if (posicion != NULL)
		a_devolver = malloc((posicion - string) + 1);
	else
		return (string);
	int i = 0;
	while(i < (posicion - string))
	{
		a_devolver[i] = string[i];
		i ++;
	}
	a_devolver[i] = '\0';
	return a_devolver;
}

char *liberasao(char **aliberar)
{
	free(*aliberar);
	*aliberar = NULL;
	return NULL;
}
