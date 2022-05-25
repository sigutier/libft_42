#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

//Escribe el carácter 'c' en el archivo descriptor especificado.