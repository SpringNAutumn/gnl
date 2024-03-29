/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDprueba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:31:21 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/29 19:01:23 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (void)
{
	int fd = open("oruebafile.txt", O_RDONLY);
	char *escribir = get_next_line(fd);
	char *escribir1 = get_next_line(fd);
	char *escribir2 = get_next_line(fd);
	char *escribir3 = get_next_line(fd);
	char *escribir4 = get_next_line(fd);
	char *escribir5 = get_next_line(fd);
	
	printf("La cadena leida por el feed es: %s \n", escribir);
	printf("La cadena leida por el feed es: %s\n", escribir1);
	printf("La cadena leida por el feed es: %s\n", escribir2);
	printf("La cadena leida por el feed es: %s\n", escribir3);
	printf("La cadena leida por el feed es: %s\n", escribir4);
	printf("La cadena leida por el feed es: %s\n", escribir5);
	
	
	return (0);
}