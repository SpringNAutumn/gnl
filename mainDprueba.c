/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDprueba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:31:21 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/12/29 17:06:05 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlprueba/get_next_line.h"
int main (void)
{
	char* escribir;
	int fd = open("oruebafile.txt", O_RDONLY);
	escribir = get_next_linee(fd);
	
	printf("La cadena leida por el feed es: %s", escribir);
	return (0);
}
