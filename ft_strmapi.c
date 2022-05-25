#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *str;

    if (!s || !f)
        return (NULL);

    i = 0;
    len = ft_strlen(s);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

char increment(unsigned int i, char c)
{
    char result;
    result = c + 1;
    return result;
}

/*int main()
{
    char *result = ft_strmapi(s, increment);

    printf("%s\n", result);
    return 0;
}*/