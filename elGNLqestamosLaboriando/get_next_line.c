/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:53:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/16 15:33:31 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char* suboofer;
	char* boofer;

	boofer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!boofer)
        return NULL;
	
	int bytes = read(fd, boofer, BUFFER_SIZE);
	if (bytes == -1)
		return ("errr error");
	boofer[bytes] = '\0';
	
	while (ft_strchr(boofer, '\n') == NULL)
	{		
		// char* temp = suboofer;
		//suboofer = ft_strjoin(suboofer, boofer);
		// free(temp);
		bytes = read(fd, boofer, BUFFER_SIZE);
	}
/*
	char* fino;
	
	if (fino = ft_strchr(boofer, '\n'))
	{
		int corta = ft_strlen(fino);
		int ameter = ft_strlen(boofer) - corta;
		char *auxo = malloc (sizeof(char) * ameter + 1);
	
		ft_strncpy(auxo,boofer,ameter);
		auxo[ameter] = '\0';

		char *temp = suboofer;
		suboofer = ft_strjoin(suboofer, auxo);
		free (temp);
		free (auxo);
	}
	*/

	return (boofer);
	free (boofer);
	return (suboofer);
}
