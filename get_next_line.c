/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:03:50 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/29 19:25:47 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Still reachable memory is memory that is 
//assigned and not freed although is not cosidered a memory leak since it is still accessible

char *get_next_line(int fd)
{
	static char	*suboofer;
	char		*boofer;
	int 		bytesread;
	char		*devolusao;
	char		*tmp;

	boofer = malloc(BUFFER_SIZE + 1);
	if (!boofer)
		return NULL;

	int i = -1;
	// rellenamos el boofer con \0
	while (++i <= BUFFER_SIZE)
		boofer[i] = '\0';

	if (suboofer == NULL)
		suboofer = ft_strdup("");

	while (!ft_strchr(suboofer, '\n'))
	{
		if ((bytesread = read(fd, boofer, BUFFER_SIZE)) <= 0)
		{
			free (boofer);
			if (bytesread == 0)
				break ;
			return (NULL);
		}
		boofer[bytesread] = '\0';
		tmp = suboofer;
		suboofer = ft_strjoin(suboofer, boofer);
		free (tmp);
	}
	
	devolusao = retrieve_line(suboofer);

	
	char *temp = limpiamos(suboofer);
	//free (suboofer);
	suboofer = temp;
	if (*devolusao == '\0')
		return (NULL);
	return (devolusao);
}

/*
	Liberacion: la string a liberar se reccorre hasta la ultima posición, lo liberado será la longitud de la cadena. 
*/

// perdemos 1 byte limpiamos debe de estar mal.
char *limpiamos(char *string)
{
	char	*devo;
	int		i;

	i = 0;
	if (string[i] == '\0')
		return (NULL);

	while (string[i] != '\n' && string[i] != '\0')
		i++;
	
	if (string[i] == '\0')
		return (liberasao(&string));
	devo = ft_strndup(string + i + 1 , ft_strlen(string) - (i + 1));
	liberasao(&string);

	return (devo);
}
char *retrieve_line(char *string)
{	
	int i;

	i = 0;
	char *posicion = ft_strchr(string, '\n');
	char *a_devolver;

	if (posicion != NULL)
		a_devolver = malloc((posicion - string) + 2);
	else
		return (ft_strdup(string));
	
	while(i < (posicion - string) + 1)
	{
		a_devolver[i] = string[i];
		i ++;
	}
	a_devolver[i] = '\0';
	return (a_devolver);
}

char* liberasao(char **aliberar)
{
	free(*aliberar);
	*aliberar = NULL;
	return (NULL);
}
