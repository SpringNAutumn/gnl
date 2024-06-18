/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:53:06 by gmarin-m          #+#    #+#             */
/*   Updated: 2024/06/17 14:58:25 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int     ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*retrieve_line(char *string);
char	*liberating(char **aliberar);
char	*freeing(char *string);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);
char	*ft_strndup(char *s1, int n);
char	*readfile(char *suboofer, char *boofer, int fd);

#endif