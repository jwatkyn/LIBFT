#include "ft_header.h"

int	strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (*str1 && *str2 && i <= n)
	{
		if (*str1 != *str2)
			return ((int)(*str1 - *str2));
		str1++;
		str2++;
		i++;
	}
	return (0);
}
