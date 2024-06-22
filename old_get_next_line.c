/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_get_next_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:18:05 by marvin            #+#    #+#             */
/*   Updated: 2024/06/22 21:18:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd)
{
	static char	*suboofer;
	char		*boofer;
	char		*line;

	if (BUFFER_SIZE < 0 || BUFFER_SIZE > INT_MAX || fd < 0)
		return (NULL);
	boofer = malloc(BUFFER_SIZE + 1);
	if (!boofer)
		return (NULL);
	boofer[BUFFER_SIZE] = '\0';
	if (suboofer == NULL)
	{
		suboofer = ft_strdup("");
		  if (!suboofer)
        {
            free(boofer);
            return (NULL);
        }
		
		//printf("el suboofer nuloo: %s", suboofer);
	}
	suboofer = readfile(suboofer, boofer, fd);
	free(boofer);
	line = retrieve_line(suboofer);
	suboofer = freeing(suboofer);
	if (!line)
		return (NULL);
	if (*line == '\0')
	{
		free (line);
		return (liberating(&(suboofer)));
	}
	//printf("%s", line);
	return (line);
}