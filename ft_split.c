#include "libft.h"

static int  ft_lenword(char const *s, char c, unsigned int lenw);
static unsigned int  ft_countw(char const *s, char c);
static char **ft_free(char **tabl, int i);
char **ft_split(char const *s, char c)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    lenw;
    char    **tabl;

    if (!s)
        return (0);
    i = -1;
    lenw = 0;
    j = 0;
    tabl = (char **)malloc(((sizeof(char*)) * (ft_countw(s, c) + 1)));
    if (!tabl)
        return (NULL);
    while (++i < ft_countw(s, c))
    {
        j = 0;
        tabl[i] = (char *)malloc(ft_lenword(s, c, lenw) + 1);
        if (!tabl[i])
            return (ft_free(tabl,i));
        while (s[lenw] && s[lenw] == c)
            lenw++;
        while (s[lenw] && s[lenw] != c)
        {
            tabl[i][j] = s[lenw];
            j++;
            lenw++;
        }
        tabl[i][j] = 0;
    }
    tabl[i] = 0;
    return (tabl);
}

static char **ft_free(char **tabl, int i)
{
    int j;

    j = 0;
    while (j < i && tabl[j])
    {
        free(tabl[j]);
        j++;
    }
    free(tabl);
    return (0);
}

static int  ft_lenword(char const *s, char c, unsigned int lenw)
{
    int count;

    count = 0;
    while (s[lenw] == c && s[lenw])
        lenw++;
    while (s[lenw] && s[lenw] != c)
    {
        count ++;
        lenw++;
    }
    return (count);
}

static unsigned int  ft_countw(char const *s, char c)
{
    int i;
    int count;

    if (!s || !s[0])
		return (0);
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    return (count);
}
