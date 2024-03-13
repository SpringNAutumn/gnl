/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:53:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/13 17:26:33 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	
	// La variable estatica que mantendra valor entre llamada a la función. 
	// se meterá en la variable estáica pero cuando lea salto de linea se borra la variable estática.
	
	static char* suboofer;
	char* boofer;

	// almacenamos el primer boffer dando buffersize.
	boofer = malloc(sizeof(char*) * (BUFFER_SIZE + 1));

	// numero bytes leidos. 		
	// leemos todo el buffer hasta buffersize el cual se almacenará en boofer, ahora tendremos que leer el boofer.
	int bytes = read(fd, boofer, BUFFER_SIZE);

	boofer[bytes] = '\0';

	/*
		Mientras no se encuentre un salto de linea en el buffer, 
		metemos en la variable estática el buffer.		
	*/

// variable pibote para liberar memoria....
	while (ft_strchr(boofer, '\n') == NULL)
	{
		char* temp = suboofer;
		
		// concatenamos, la memoria en teoría se libera. 
		suboofer = ft_strjoin(suboofer, boofer);
		// ahora ya tenemos la memoria de suboofer y eliminamos temp.
		free(temp);

	if (ft_strchr(boofer, '\n') == '\n')
		break;
	}
	return (suboofer);
}
