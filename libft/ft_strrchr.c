#include "ft_header.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t len;
	char chr;

	chr = c;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == chr)
			return ((char*)(s + len))
		len--;
	}
	return (NULL);
}
