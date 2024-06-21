/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainNOBonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:35:19 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/06/18 16:56:35 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (void) 
{
    int fd;
    char *escribir;
    
    fd = open ("pruebafile.txt", O_RDONLY);
    escribir = get_next_line(fd);
        
    while (escribir)
    { 
        printf ("%s", escribir);
        free(escribir);  
        escribir = get_next_line(fd);
     
  
    }  

    close(fd);
    free (escribir);
}