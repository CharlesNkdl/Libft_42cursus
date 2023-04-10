#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *sptr;
    unsigned char cp;
    size_t i;

    i = 0;
    sptr = (unsigned char*) s;
    cp = c;
    while (i < n)
    {
        if (*(sptr + i) == cp)
            return ((unsigned char*)s + i);
        i++;
    }
    return (NULL);
}
