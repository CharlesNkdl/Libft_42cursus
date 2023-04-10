#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *destptr;
    unsigned char *srcptr;

    if (dest == src || n == 0)
        return (dest);
    destptr = (unsigned char *)dest;
    srcptr = (unsigned char *)src;
    if (dest < src)
    {
        while (n--)
            *(destptr++) = *(srcptr++);
    }
    else
    {
        destptr += n - 1;
        srcptr += n - 1;
        while (n--)
            *(destptr--) = *(srcptr--);
    }
    return (dest);
}
