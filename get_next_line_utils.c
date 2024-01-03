/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:52:08 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/01/03 19:56:06 by gmarin-m         ###   ########.fr       */
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
			return s;
		s++;
	}
	return NULL;
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

size_t ft_strlen(char *s)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	o;
	char	*s2;

	i = 0;
	o = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start < ft_strlen(s))
	{
		s2 = malloc(len + 1);
		if (!s2)
			return (NULL);
		while (s[i] && o < len)
		{
			s2[o] = s[start + i];
			o++;
			i++;
		}
	}
	s2[o] = '\0';
	return (s2);
	free (s2);
}
