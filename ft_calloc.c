#include "libft.h"

void    *ft_calloc(size_t nmenb, size_t size)
{
    void    *ptr;

    if (nmenb == 0 || size == 0)
    {
        nmenb = 1;
        size = 1;
    }
    if (nmenb > (nmenb * size) / size)
		return (NULL);
    ptr = malloc(nmenb * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nmenb * size);
    return (ptr);
}
