#include "libft.h"

char    *ft_itoa(int n)
{
    if (!n)
        return (NULL);
    if (n == 0)
        return "0";

    int div;
    int rest;
    int num;

    div = 0;
    num = n;
    while(num != 0)
    {
        num = num / 10;
        div++;
    }
    char *str_n;
    int i;
    char c;
    int is_negative;

    num = n;
    is_negative = num < 0;
    if (is_negative)
    {
        str_n = (char *)malloc((div + 2) * sizeof(char));
        i = div;
        str_n[0] = '-';
        str_n[div + 1] = '\0';

    }
    else 
    {
        str_n = (char *)malloc((div + 1) * sizeof(char));
        i = div - 1;
        str_n[div] = '\0';

    }

    while (num != 0)
    {
        rest = num % 10;
        num = num / 10;
        if (is_negative)
        {
            c = -rest + 48;
        }
        else
        {
            c = rest + 48;
        }
        str_n[i] = c;
        i--;
    }
    return (str_n);
}

/*int main()
{
    char    *result = ft_itoa(0);

    printf("%s\n", result);
    return 0;
}*/