/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainDprueba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:31:21 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/06/17 15:31:08 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (void)
{
	int fd;
	char *escribir;

	escribir = get_next_line(fd);
	while (escribir)
	{
		fd  = open("oruebafile.txt", O_RDONLY);
		printf("%s", escribir);
		free(escribir);
		escribir = get_next_line(fd2);
		printf("%s", escribir);
		free(escribir);
		escribir = get_next_line(fd3);
		printf("%s", escribir);
		free(escribir);
		escribir = get_next_line(fd);
	}

	free (escribir);
	close(fd);
	return (0);
}
