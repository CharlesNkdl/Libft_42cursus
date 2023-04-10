#include "libft.h"

char    *ft_strrchr(char const *s, int c)
{
    char    find;
    int         i;

    find = (unsigned char)c;
    i = ft_strlen(s);
    while(i > 0)
    {
        if (s[i] == find)
            return (((char *)s) + i);
        i--;
    }
    if (s[i] == find)
        return ((char*)s);
    return (0);
}
