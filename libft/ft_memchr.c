#include "ft_header.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*str)
	{
		if ((unsigned char)(*str) == c)
			return (str);
		str++;
	}
	return (NULL);
}
