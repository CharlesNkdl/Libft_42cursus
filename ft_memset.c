#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char c_repl;
    unsigned char *remplaptr;

    i = 0;
    c_repl = c;
    remplaptr = s;
    while (i++ < n)
    {
        *remplaptr++ = c_repl;
    }
    return (s);
}
