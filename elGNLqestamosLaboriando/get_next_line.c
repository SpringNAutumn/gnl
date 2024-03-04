#include "get_next_line.h"

// Nuestra funcion get next line tiene que ir iterando para mostrar por pantalla el contenido del file descriptor. 
// lo que hacemos será almacenar en la variable estática en caso de que el boofer sea menor a la longitud de la palabra.


/*
	Esto es el getnextline, es una introducción a las variables estáticas en C.
	una variable estática es una variable que retiene su valor entre llamadas a la funcion.

		Las variables son inicializadas solo una vez. 
		El alcance de la variable es dentro de la funcion donde está definida. 
		pero retienen su valor entre llamadas a la funcion. 

*/

// le pasamos el fd del archivo que queremos leer. 
// si le pasamos un buffersize de 5. primero leemos a boofer, despues a suboofer. 
char *get_next_line(int fd)
{
	static char* suboofer;
	char* boofer;

	// 	Almacenamos en buffer lo leido del feed hasta buffersize.
	//  El buffersize +1 es para almacenar el caracter de escape.
	boofer = malloc(sizeof(char*) * (BUFFER_SIZE + 1));

	// leemos todo el buffer hasta buffersize el cual se almacenará en boofer, ahora tendremos que leer el boofer
	int bytes = read(fd, boofer, BUFFER_SIZE);
	boofer[bytes] = '\0';


	while (boofer != '\0')
	{
		// Aqui en teoria estamos allocando a la string suboofer un tamano de malloc, con tamano del boofer - la primera.
		// guardamos en una variable el resultado de strchr. no podemos asignar el resultado directamente posiblemente al ser
		// una variable estatica.
		char newline* = strchr(boofer, '\n');
		if (!newline)
			return NULL;
		int index = newline - boofer;
		// al boofer hay que restarle lo retante del boofer, eso es el boofer - newline 
		suboofer = malloc(sizeof(char*) * (sizeof(boofer) - newline));
	// ahora ya tenemos la memoria de suboofer 
	}
	// comprobamos si el boofer tiene un \n. Si el boofer tiene un \n lo que hacemos es iterar.
		
			suboofer = malloc (sizeof(char*) * (boofer + 1));

	return (boofer);
}

// aqui tenemods que meter el boofer para que sea devuelta solo una linea y el resultado almacenarlo en el suboofer.
void read_line()
{



}








