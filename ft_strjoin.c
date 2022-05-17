#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len_s1 = ft_strlen(s1);
    int len_s2 = ft_strlen(s2);
    int len_total = len_s1 - 1 + len_s2; // resto NULL de s1
    int i;
    int j;

    char *str = (char *)malloc(len_total * sizeof(char));
    if (!str)
    {
        return (NULL);
    }
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        str[j++] = s1[i++];
    }
    i = 0;
    while (s2[i] != '\0')
    {
        str[j++] = s2[i++];
    }
    str[j] = '\0';
    return (str);
}
