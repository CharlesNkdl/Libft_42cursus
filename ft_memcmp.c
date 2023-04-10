#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *sptr;
    unsigned char   *scptr;

    if (s1 == s2 || n == 0)
        return (0);
    sptr = (unsigned char *)s1;
    scptr = (unsigned char *)s2;
    while (n--)
    {
        if ((*sptr) != (*scptr))
            return (*sptr - *scptr);
        if (n)
        {
            sptr++;
            scptr++;
        }
    }
    return (0);
}
