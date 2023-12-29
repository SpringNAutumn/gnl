# Construccion de listas en C # 

    Las listas en c se pueden codificar por medio de structs. 
        Los structs no son mas que colecciones de variables. Donde podemos guardar tanto 

        // para crear listas necesitamos un struct inicial. 

struct	s_list 
    {
	    void	*content;
	    struct	s_list *next;
    }   t_list;



// crea un nuevo nodo utilizando malloc la variable miembro content se inicializa con el contenido del paráetro content la variable next con null. 

// funcion que coge como parametro un valor y lo mete en el contenido de un struct tipo lista el cual devuelve.

// ponemos un null en el nodo next. 
// basicamente lo que estamos haciendo es crear im mpdp allocando memoria para el y devlviendolo junto con un valor que hemos metido. 

t_list *ft_lstnew(void *content)
{
    t_list *nodo;
    nodo = malloc (sizeof(t_list));

    if (!nodo)
        return (nodo);

    nodo -> content = content;
    nodo -> next = NULL;

    return (nodo);
}
Nombre de función

    ft_lstadd_front
    Prototipo void ft_lstadd_front(t_list **lst, t_list *new);

    Parámetros lst: la dirección de un puntero al primer nodo de una lista.
    new: un puntero al nodo que añadir al principio de la lista.
    Descripción Añade el nodo ’new’ al principio de la lista ’lst’.

*/


 // tenemos que añadir al final de lst el nuevo nodo new.
    // para eso haremos un bucle que itere hasta que el nodo next sea null y en el metera new. 


void ft_lstadd_front(t_list **lst, t_list *new)
{

    if (lst)
    {
        if (*lst)
            new->next = *lst;
        *lst = new;
    }
    when we see that next is null we add the new t_list to the next.
}

// Para contar los elementos de una lista lo que haremos será leer 

int ft_lstsize(t_list *lst)
{
    int aux = 0;
    while (lst)
    {
        lst = lst->next;
        aux ++;
    }
    return aux;
}