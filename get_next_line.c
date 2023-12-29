#include "get_next_line.h"

// Nuestra funcion get next line tiene que ir iterando para mostrar por pantalla el contenido del file descriptor. 
// lo que hacemos será almacenar en la variable estática en caso de que el boofer sea menor a la longitud de la palabra.

char *get_next_line(int fd)
{
	static char* suboofer;
	char* boofer;

	// 	Almacenamos en buffer lo leido del feed hasta buffersize.
									// El buffersize +1 es para almacenar el caracter de escape. 
	boofer = malloc(sizeof(char*) * (BUFFER_SIZE + 1));
	int bytes = read(fd, boofer, BUFFER_SIZE);
	boofer[bytes] = '\0';
	// En nuestro buffer tenemos todo lo leido. en el boofer podremos separar palabras 
		// En el buffer lo que tenemos que hacer es separar las palabras cuando se encuentre el salto de linea?

	// tenemos que hacer que si encuentra un \n que salte de llamada a la funcion.
	return (boofer);
}


