#include "libft.h"

static size_t	ft_ilen(int nbr)
{
	size_t		len;
	unsigned int	n;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		n = -nbr;
	else
		n = nbr;
	len = 0;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		size;
	int		sign;
	char		*str;
	unsigned int	n;

	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		n = nbr * (-1);
	}
	size = ft_ilen(nbr) + sign;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	str[--size] = (n % 10) + '0';
	while (--size >= sign)
		str[size] = ((n /= 10) % 10) + '0';
	return (str);
}
