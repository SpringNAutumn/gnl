#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

// definimos el buffer size. 
#define BUFFER_SIZE 100

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

size_t ft_strlen(char *s);
char    *ft_substr(char *s, unsigned int start, size_t len);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchr( char *s, int c);
char *retrieve_line(char *string);
char *liberasao(char **aliberar);
char *limpiamos (char *string);
char *ft_strdup(char *s1);
char *get_next_line(int fd);
char *ft_strndup(char *s1, size_t n);

#endif