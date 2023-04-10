#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	countwo;
	size_t	check;

	count = 0;
	countwo = 0;
	check = 0;
	if (little[count] == '\0')
		return ((char *)big);
	if (!len)
		return (0);
	while (big[count] && count < len)
	{
		countwo = 0;
		check = 0;
		while (little[countwo] == big[count + countwo] && (count + countwo) < len)
		{
			check ++;
			countwo ++;
			if (check == ft_strlen(little))
				return ((char*)&big[count]);
		}
		count++;
	}
	return (NULL);
}
