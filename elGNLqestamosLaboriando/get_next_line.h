#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFFER_SIZE 4

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char *get_next_line(int fd);
char *ft_strchr(const char *s, int c);
int ft_strlen(char *s1);
char *ft_strjoin(char *s1, char *s2);
char * ft_strncat (char *dst, const char *src, size_t n);
char* ft_strncpy(char *dst, const char *src, size_t len);

#endif