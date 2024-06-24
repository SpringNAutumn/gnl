/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:03:50 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/06/18 16:41:38 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*suboofer[1024];
	char		*boofer;
	char		*line;
	char		*temp_suboofer;

	if (BUFFER_SIZE < 0 || BUFFER_SIZE > INT_MAX || fd < 0)
		return (NULL);
	boofer = malloc(BUFFER_SIZE + 1);
	if (!boofer)
		return (NULL);
	boofer[BUFFER_SIZE] = '\0';
	if (suboofer[fd] == NULL)
		suboofer[fd] = ft_strdup("");
	temp_suboofer = readfile(suboofer[fd], boofer, fd);
	free(boofer);
	if (!temp_suboofer)
		liberating(&(suboofer[fd]));
	suboofer[fd] = temp_suboofer;
	line = retrieve_line(suboofer[fd]);
	suboofer[fd] = freeing(suboofer[fd]);
	if (!line)
		return (NULL);
	if (*line == '\0')
		return (free(line), liberating(&(suboofer[fd])));
	return (line);
}

char	*freeing(char *string)
{
	char	*devo;
	int		i;

	i = 0;
	if (string == NULL)
		return (liberating(&string));
	while (string[i] != '\n' && string[i] != '\0')
		i++;
	if (string[i] == '\0')
		return (liberating(&string));
	devo = ft_strndup(string + i + 1, ft_strlen(string) - (i + 1));
	liberating(&string);
	return (devo);
}

char	*retrieve_line(char *string)
{
	int		i ;
	char	*posicion;
	char	*a_devolver;

	i = 0;
	posicion = ft_strchr(string, '\n');
	if (posicion != NULL)
		a_devolver = malloc((posicion - string) + 2);
	else
		return (ft_strdup(string));
	while (i < (posicion - string) + 1)
	{
		a_devolver[i] = string[i];
		i++;
	}
	a_devolver[i] = '\0';
	return (a_devolver);
}

char	*liberating(char **aliberar)
{
	free(*aliberar);
	*aliberar = NULL;
	return (NULL);
}

char	*readfile(char *suboofer, char *boofer, int fd)
{
	int		bytesread;
	char	*tmp;

	while (!ft_strchr(suboofer, '\n'))
	{
		bytesread = read(fd, boofer, BUFFER_SIZE);
		if (bytesread <= 0)
		{
			if (bytesread == 0)
				break ;
			return (NULL);
		}
		boofer[bytesread] = '\0';
		tmp = suboofer;
		suboofer = ft_strjoin(suboofer, boofer);
		free(tmp);
	}
	return (suboofer);
}
