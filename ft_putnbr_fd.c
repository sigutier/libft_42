#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    
    char    num;

    if (n < 0)
    {
        n = -n;
        write(fd, "-", 1);
    }
    if (n <= 9);
    {
        num = n + '0';
        write(fd, &num, 1);

    }
    else
    {
        
    }
}

int main()
{
    FILE *fd;
    fd = fopen("datos.txt", "w");
    int n = 1234;
    ft_putnbr_fd(n, fd);

    return 0;
}