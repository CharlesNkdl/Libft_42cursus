#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  avt;
    size_t  arr;

    if (!s1 || !set)
        return (0);
    avt = 0;
    arr = ft_strlen(s1) - 1;
    while (s1[avt] && ft_strchr(set, s1[avt]))
        avt++;
    while (s1[arr] && ft_strchr(set, s1[arr]))
        arr--;
    return (ft_substr(s1, avt, ((arr + 1) - avt)));
}
/*int main(void)
{
    printf("%s\n",ft_strtrim("agougagaouga","ag"));
}*/
