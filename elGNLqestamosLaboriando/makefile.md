
## **Los archivos makefile son utilizados cuando necesitamos compilar mas de un archivo c, los cuales tienen dependencias unos de otros.Tambien tenemos que ver que utilidad real tienen los header files.**

&nbsp;
&nbsp;
&nbsp;
&nbsp;

Makefile is a set of commands with variable names and targets 
to create the object file. The main idea of this file is to specify 
the dependencies of a file.

The header file only includes the declaration of a function.

 ### el makefile seria tal que así:

    el makefile tiene la siguiente estructura:

     targets : prerequisites
        command
        command
        command 

  > Redefinir

        a : client.o server.o gcc      // especificando que compile las dos funciones?
            client.o server.o client.o client.o : client.o server.h gcc
             - c client.c server.o : server.o server.h gcc
             - c server.c** 


El makefile es algo lioso pero basicamente estamos mandando al archivo **a** hay que tener en cuenta que si es linux este cambiará a 
a.out. La primera linea respresenta todo el codigo que hemos escrito hasta el momento. client.o and server.o que son los archivos requeridos para hacer el archivo objeto a.



### explicacion de linkers y object files ###

    Los archivos .o son archvios object que contienen codigo maquina al igual que informacion extra para que el enlazador sepa que archivos necesita (variables globales, funciones, etc etc).

    Un linker coge todo los archivos objetos y los combina para formar un ejecutable. 

    Se puede utilizar el -c para decirle al compilador que solo compile y no linke ??
    (¿para que servirá esto? ,suponemos que no creará un ejectubale?). 



#### explicación mas simple aun ####

El object file el el archivo compilado en si. Y un ejectubale no es mas que los archivos linkeados y compilados entre si.

Vemos como se está comparando el makefile con herramientas de manjeo de dependencias como maven en java. Claro que estas son diferentes y mas complejas (de momento). 

Los lenguajes interpretados no necesitan herramientas analogas al makefile o herramientas como maven. 
make se podria decir que es un programa. 

Hay que tener en cuenta que se pueden introducir variables. podemos hacer de nuestro makefile un archivo bastante complejo.
