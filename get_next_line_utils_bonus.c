/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:20:12 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/06/18 12:30:33 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		o;
	int		i;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	o = 0;
	i = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[ft_strlen(s1)] = '\0';
	return (s2);
}

char	*ft_strndup(char *s1, size_t n)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(n + 1 * sizeof(char));
	if (!s2)
		return (NULL);
	while (i < n && s1)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[n] = '\0';
	return (s2);
}



