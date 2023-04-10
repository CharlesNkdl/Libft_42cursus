#include "libft.h"

static void ft_putnbr_ct(int nb, int *count);
char *ft_itoa(int n)
{
    int i;
    char *ptr;
    int j;

    i = 0;
    j = 0;
    ft_putnbr_ct(n, &i);
    ptr = (char *)malloc(i + 1);
    if (!ptr)
        return (0);
    ptr[i] = '\0';
    if (n < 0 )
    {
        ptr[0] = '-';
        if (n == -2147483648)
        {
            ptr[1] = '2';
            n = 147483648;
            j++;
        }
        else
            n *= -1;
        j += 1;
    }
    while (i > j)
    {
        *(ptr + (i - 1)) = (unsigned char)(n % 10 + 48);
        n /= 10;
        i--;
    }
    return (ptr);
}

static void ft_putnbr_ct(int nb, int *count)
{
	unsigned int	temp;

	if (nb < 0)
	{
        *count += 1;
		temp = nb * -1;
	}
	else
		temp = nb;
	if (temp >= 10)
    {
        *count += 1;
		ft_putnbr_ct(temp / 10, count);
    }
    else
	    *count += 1;
}
