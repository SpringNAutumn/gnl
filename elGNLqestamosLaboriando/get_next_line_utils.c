/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:52:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/13 17:27:02 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


// Aqui programaremos las funciones auxiliares que nos van a ayudar como el strchr.
// the strchr() function locates the first occurrence of c converted to a char in the string pointed to by s.
// nos flatan algunas funciones utiles para el get next line.

// el strchr devuelve puntero a la primera iteracion del caracter. 
char *ft_strchr(const char *s, int c)
{
	if (!s)
		return NULL;
		
	while(*s)
	{
		if (*s == c)
			return (char*)s;
		s++;
	}
	return (NULL);
}

int ft_strlen(char *s1)
{
	int i;
	
	i = 0;
	while(s1[i])
	{
		i++;
	}
	return (i);
}


// Necesitamos esta funcion para concatenar las dos cadenas. 
// En caso de que no se encuentre el salto de linea, concatenaremos y asignaremos a la variable estática.
// creo que no tendremos que asignar espacio en memoria.
char *ft_strjoin(char *s1, char *s2)
{
	int i = 0;
	int o = 0;
	char *s3 = malloc (strlen(s1) + strlen(s2) + 1);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[o])
	{
		s3[i] = s2[o];
		i++;
		o++;
	}

	s3[i] = '\0';
	return (s3);
}

