#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    size_t len;
    int is_inside;
    char *str;

    if (s1 == NULL || set == NULL)
        return (NULL);
    len = 0;
    i = 0;
    while (s1[i])
    {
        j = 0;
        is_inside = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
            {
                is_inside = 1;
            }
            j++;
        }
        if (is_inside == 0)
        {
            len++;
        }
        i++;
    }
    str = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    k = 0;
    while (s1[i])
    {
        j = 0;
        is_inside = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
            {
                is_inside = 1;
            }
            j++;
        }
        if (is_inside == 0)
        {
            str[k] = s1[i];
            k++;
        }
        i++;
    }
    str[k] = '\0';
    return (str);
}