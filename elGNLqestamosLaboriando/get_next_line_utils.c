/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:52:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/03/16 14:01:32 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char *ft_strjoin(char *s1, char *s2)
{
	int i = 0;
	int o = 0;
	char* s3;
	
	if (!s1 || !s2)
        return (NULL);
	
	if (!(s3 = malloc(sizeof(*s3) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[o])
	{
		s3[i+o] = s2[o];
		o++;
	}

	s3[i + o] = '\0';
	return (s3);
}

// funcion de copiar hasta x caracteres

char* ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	
	i = 0;
	if (!dst || !src)
		return NULL;
			
	while (i < len && src[i] != '\0')
		dst[i] = src[i];

return (dst);
}

// Strncat concatenar. 

char * ft_strncat (char *dst, const char *src, size_t n)
{
	size_t dst_len = ft_strlen (dst);
	size_t i;

	while(i < n && src[i] != '\0')
	{
		dst [dst_len + i] = src [i];
		i ++;
	}
	
	dst [dst_len + i] = '\0';
	return (dst);
}
