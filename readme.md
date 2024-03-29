puntero de un puntero:

--- se declara un puntero qu apuntará a otro puntero

se declara la variable y se asigna pero como es un puntero doble la variable o la direccion
de memoria se asigna al "segundo puntero"


char *liberasao(char **aliberar)
{
	free(*aliberar);
	*aliberar = NULL;
	return NULL;
}



// al ser una variable estatica se tiene que liberar la memoria manualmente


--- Si tenemos una string, apntamos un puntero a una cadena y luego liberamos de memoria la cadena obiamente apuntara a un espacio vacio. 


por lo que tenemos que duplicar la cadena desde el punto donde la queremos antes de liberarla. 

    if (string[i] == '\0') {
        devolucion = ft_strdup("");
    } else {
        devolucion = &string[i + 1];
    }

	a.out(11810,0x10d042dc0) malloc: *** error for object 0x6575710a616c6f68: pointer being freed was not allocated
	a.out(11810,0x10d042dc0) malloc: *** set a breakpoint in malloc_error_break to debug
	zsh: abort      ./a.out

-- En algun momento estamos liberando memoria del suboofer no alocada. 