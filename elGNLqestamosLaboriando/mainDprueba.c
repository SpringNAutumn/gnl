/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDprueba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:31:21 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/13 15:24:47 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (void)
{
	char* escribir;
	int fd = open("oruebafile.txt", O_RDONLY);

	// llamamos get next line, nos devuelve una linea
	escribir = get_next_line(fd);
	
	printf("La cadena leida por el feed es: %s", escribir);
	return (0);
}
