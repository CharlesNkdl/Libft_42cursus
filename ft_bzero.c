#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t     i;
    unsigned char *eraser;

    eraser = s;
    i = 0;
    while (i++ < n)
        *eraser++ = 0;
}
