
#include "get_next_line.h"

int main (void) 
{
    int fd;
    char *escribir;
    
    fd = open ("pruebafile.txt", O_RDONLY);
    escribir = get_next_line(4);
        
    while (escribir)
    { 
        escribir = get_next_line(4);
        printf ("%s", escribir);
        free(escribir);  
    }
    close(fd);
    free (escribir);
}