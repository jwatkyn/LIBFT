#include "ft_header.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
