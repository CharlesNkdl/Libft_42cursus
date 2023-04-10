#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    i = 0;
	if ((unsigned int)ft_strlen(s) < start || !len || !s)
		return (ft_strdup(""));
    while (s[start + i] && i < len)
        i++;
    str = (char *)malloc(i + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s[start] && i < len)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = 0;
    return (str);
}
