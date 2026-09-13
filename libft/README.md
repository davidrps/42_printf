*Este proyecto ha sido creado como parte del currículo de 42 por dparra-s.*

# libft.a

## Description
The main objective of this project is the creation of a personal library, based of a set of functions to be used as utils of future projects.

The project includes a `libft.h` file and a `makefile` file to compile the library objects with the command ar to group it in a `libft.a` library file to be used easily.

### Part 1 - libc functions
In the first part of the project, I rebuilded some useful functions from the **libc** (the standard C library). Each function included in this part has the same prototype y behavior of the original funcions, following the definitions of the `man` page of each one.

This is the list of rebuilded functions from **libc**:

- **ft_atoi:** The function convert a string ended with '\0' to an int value if the string includes numeric valid values at the begining. It also ignore the spaces at the begining, process the sign and ends when it find the first char no numeric.
*Prototype:* `int		ft_atoi(const char *str);`
- **ft_bzero:** The function is used to erase the data in a block of memory by writing zeros (\0) to it. It is commonly used to clear or initialize buffers, arrays, or structures before they are used.
*Prototype:* `void	ft_bzero(const void *s, size_t n);`
- **ft_calloc:** The function allocates a block of memory dynamically in the heap for an array of elements, initializes all its bytes to zero ('\0'), and returns a pointer to it.
*Prototype:* `void	*ft_calloc(size_t count, size_t size);`
- **ft_isalnum:** The function tests whether a passed character is an alphanumeric character, meaning it checks if the character is either a decimal digit or an uppercase/lowercase letter.
*Prototype:* `int		ft_isalnum(int c);`
- **ft_isalpha:** The function tests whether a passed character is an alphabetic character, checking if it falls within the uppercase 'A'-'Z' or lowercase 'a'-'z' ranges.
*Prototype:* `int		ft_isalpha(int c);`
- **ft_isascii:** The function tests whether a passed character is a valid 7-bit US-ASCII character, meaning its numeric value falls between 0 and 127 inclusive.
*Prototype:* `int		ft_isascii(int c);`
- **ft_isdigit:** The function tests whether a passed character is a valid decimal digit character, checking if it falls within the range of '0' to '9'.
*Prototype:* `int		ft_isdigit(int c);`
- **ft_isprint:** The function tests whether a passed character is a printable character, which includes any charac	ter that occupies visual space on the screen, including the space character (' ').
*Prototype:* `int		ft_isprint(int c);`
- **ft_memchr:** The function scans the initial n bytes of the memory area pointed to by s for the first occurrence of a specific character c (converted to an unsigned char).
*Prototype:* `void	*ft_memchr(const void *buf, int c, size_t count);`
- **ft_memcmp:** The function compares the first n bytes of two memory areas, s1 and s2, returning an integer less than, equal to, or greater than zero depending on the byte differences.
*Prototype:* `int		ft_memcmp(const void *buf1, const void *buf2, size_t count);`
- **ft_memcpy:** The function copies n bytes from a source memory area to a destination memory area, assuming that both memory segments do not overlap.
*Prototype:* `void	*ft_memcpy(void *dest, const void *src, size_t count);`
- **ft_memmove:** The function copies n bytes from a source memory area to a destination memory area, safely handling overlapping memory regions by using a temporary buffer internally if needed.
*Prototype:* `void	*ft_memmove(void *dest, const void *src, size_t count);`
- **ft_memset:** The function fills the first n bytes of the memory area pointed to by s with the constant byte value c, commonly used to initialize memory buffers.
*Prototype:* `void	*ft_memset(void *dest, int c, size_t count);`
- **ft_strchr:** The function searches for the first occurrence of a specific character c (converted to a char) in the null-terminated string pointed to by s.
*Prototype:* `char	*ft_strchr(const char *str, int c);`
- **ft_strdup:** The function allocates sufficient memory dynamically for a copy of the string s1, performs the copy operation, and returns a pointer to the newly allocated string.
*Prototype:* `char	*ft_strdup(const char *str);`
- **ft_strlcat:** The function appends the null-terminated source string to the end of the destination string, bounding the total size of the destination buffer to prevent buffer overflows.
*Prototype:* `size_t	ft_strlcat(char *dest, char *src, size_t size);`
- **ft_strlcpy:** The function copies up to size - 1 characters from the null-terminated source string to the destination string, explicitly null-terminating the resulting string.
*Prototype:* `size_t	ft_strlcpy(char *dest, char *src, size_t size);`
- **ft_strlen:** The function computes and returns the total length of the null-terminated string s, excluding the terminating null character ('\0') itself.
*Prototype:* `size_t	ft_strlen(const char *str);`
- **ft_strncmp:** The function lexicographically compares not more than n characters of two null-terminated strings, s1 and s2, returning their difference as an integer.
*Prototype:* `int		ft_strncmp(const char *s1, const char *s2, size_t n);`
- **ft_strnstr:** The function locates the first occurrence of the null-terminated string needle in the string haystack, searching no more than len characters.
*Prototype:* `char	*ft_strnstr(const char *big, const char *litlle, size_t len);`
- **ft_strrchr:** The function searches for the last occurrence of a specific character c (converted to a char) in the null-terminated string pointed to by s.
*Prototype:* `char	*ft_strrchr(const char *str, int c);`
- **ft_tolower:** The function converts a given uppercase letter character to its corresponding lowercase equivalent if the character is indeed an uppercase letter.
*Prototype:* `int		ft_tolower(int c);`
- **ft_toupper:** The function converts a given lowercase letter character to its corresponding uppercase equivalent if the character is indeed a lowercase letter.
*Prototype:* `int		ft_toupper(int c);`

### Parte 2 - Funciones adicionales
En esta parte se desarrolló un conjunto de funciones que, o no son de la librería libc, o lo son pero de manera distinta.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Parte 3 - Listas enlazadas
En esta parte se implementaron funciones que utilizan una estructura ppara manejar listas enlazadas.
Se añade la siguiente declaración de estructura en el archivo libft.h:
```
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;
```
Las variables de la estructura t_list son:
- content: los datos contenidos en el nodo.
	Usar void * permite almacenar cualquier tipo de dato.
- next: la dirección del siguiente nodo, o NULL si el nodo actual es el último de la lista.

El listado de funciones es el siguiente:
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

### Instrucciones
Ejecutar `make` para compilar la el código. Esto crea la librería llamada `libft.a`.

Para limpiar los archivos objetos y la librería, ejecutar `make clean` y `make fclean` respectivamente.

La librería cuanta con un archivo header llamado `libft.h` que contiene los prototipos de todas las funciones en la librería. Para usar la librería, incluir el archivo header y el link a la librería descrita arriba.

### Recursos
- https://learn.microsoft.com
- https://www.ibm.com/docs/es/aix/7.2.0
- [gemini](https://gemini.google.com/app) para la generación de pruebas de validación de las funciones.