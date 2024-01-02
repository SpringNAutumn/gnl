#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

// definimos el buffer size. 
#define BUFFER_SIZE 42

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char *get_next_line(int fd);
size_t strlen(char *s);

#endif