/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:52:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/04 17:50:39 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


// Aqui programaremos las funciones auxiliares que nos van a ayudar como el strchr.
// the strchr() function locates the first occurrence of c converted to a char in the string pointed to by s.
// nos flatan algunas funciones utiles para el get next line.

char *strchr(const char *s, int c)
{
	if (!s)
		return NULL;
		
	while(*s)
	{
		if (*s == c)
			return (char*)s;
		s++;
	}
	return NULL;
}
