el get next line lo que hará sera leer caracteres desde el file descriptor especificado y los almacenará en el buffer hasta que encuentre un salto de linea al final del archivo
acto seguido copia los caracteres. 
La funcion lleva a cabo el proceso cada vez que se la llama.



lo que se pide es llamar a la funcion de manera repetida, para leer el contenido del archivo linea a linea hasta el final, 
la funcion devolvera la linea que se ha leido por teminal,  si no hay nda que leer o se ha llegao al final del archivo devolvera null. 

tenemos que asegurarnos de que nuestra funcion lea bien tanto de un archivo como del stdin (la entrada de teclado)

tener en cuenta que la linea devuelta debe terminar con el caracter n de salto de linea

el programa compilará con el flag -D BUFFER_SIZE= xx Esta flag se va a utilizar para determinar el tamaño del buffer que utiiaremos, nuestra funcion leera entre xx lineas y xx lineas e ira rellenando el buffer para posteriormente cuando se encuentre el final de linea \n se devolverá.

