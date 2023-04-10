#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = -1;
	dup = (char *) malloc(ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	while (s[++i])
		dup[i] = s[i];
	dup[i] = s[i];
	return (dup);
}
