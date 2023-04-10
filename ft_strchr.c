#include "libft.h"

char    *ft_strchr(char const *s, int c)
{
    char    find;
    int         i;

    find = (unsigned char)c;
    i = 0;
    while(s[i])
    {
        if (s[i] == find)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == find)
        return ((char *)s + i);
    return (0);
}
