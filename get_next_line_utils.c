/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:52:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/01/02 18:01:37 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Aqui programaremos las funciones auxiliares que nos van a ayudar como el strchr. 
// strdup para duplicar. 
// strlen para sacar la longitud de la cadena
// podemos poner tambien la cadena para liberar puntero.

char *strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == c)
			return s;
		s++;
	}
}

char *ft_strjoin(char *s1, char *s2)
{

	  if (!s1 || !s2)
        return NULL;
	int o;
	int i;

	o = 0;
	i = 0;
	char *s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!s3)
	 	return (NULL);

	 while (s1[i])
	{
	 	s3[i] = s1[i];
		i ++;
	}
	while (s2[o])
	{
		s3[i] = s2[o];
		i ++;
		o ++;
	}
	s3[i] = '\0';
	return (s3);
}

size_t strlen(char *s)
{
	if( s == NULL)
		return 0;
	int i = 0;
	
	while(*s)
	{
		i++;
		s++;
	}
	return i;
}
