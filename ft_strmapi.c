#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *sptr;

    if (!s)
        return (NULL);
    sptr = ft_strdup(s);
    if (!sptr)
        return (NULL);
    i = 0;
    if (sptr != NULL || f != NULL)
    {
        while (s[i])
        {
            sptr[i] =  f(i,s[i]);
            i++;
        }
    }
    sptr[i] = 0;
    return (sptr);
}
