/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:03:50 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/01/02 18:43:40 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Funcion principal del get_next_line. pasamos el feed del archivo y almacenara en el buffer el bu
char *get_next_line(int fd)
{
	static char* suboofer;
	char* boofer;
	int bytesread;



	bytesread = 0;

	boofer = malloc(BUFFER_SIZE + 1);
	if (!boofer)
		return NULL;
		
	while (!strchr(boofer, '\n'))
	{
		if ((bytesread = read(fd, boofer, BUFFER_SIZE)) <= 0)
			break;
		suboofer = strjoin(suboofer, boofer);
		
		// seek and return lastline. 
		
	}
		

	return (boofer);
}

// los pasos del get_next_line serian: alocar memoria a buffer, leer buffer, añadir a variable estatica mientras no encuentre salto de linea. en cuanto h

// El problema es que alomejor hemos metido en suboofer un salto de linea. por lo que tendremos 
