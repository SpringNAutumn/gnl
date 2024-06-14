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



// arreglar los leaks still reachable. 
int main (void)
{
	int fd = open("oruebafile.txt", O_RDONLY);
	char *escribir;

	escribir = get_next_line(fd);
	while (escribir)
	{
		printf("%s", escribir);
		free(escribir);
		escribir = get_next_line(fd);
	}

	free (escribir);
	close(fd);
	return (0);
}