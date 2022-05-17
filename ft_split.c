#include "libft.h"

static int  count_array(int c)
{
    int has_delim;
    int count;
    int i;

    has_delim = 1;
    count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] != c && has_delim == 1)
        {
            count++;
            has_delim = 0;
        }
        else if(s[i] == c)
        {
            has_delim = 1;
        }
    }return (count);
}

static char *len_str(const char *)


    char **result;
    result = (char **) malloc(count * sizeof(char *));
    int len;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {

        }
    }
}
