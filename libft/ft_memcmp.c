#include "ft_header.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (n)
	{
		size_t i;
		const unsigned char *s1;
		const unsigned char *s2;

		s1 = str1;
		s2 = str2;
		i = 0;
		while (i < n)
		{
			if (s1 != s2)
				return (s1 - s2);
			s1++;
			s2++;
			i++;
		}
	}
	return (NULL);
}
