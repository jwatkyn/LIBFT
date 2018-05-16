#include "ft_header.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	while (len < size && dest[len])
		len++;
	if (len == size)
		return (len);
	while (*dest)
		dest++;
	while (*src && len < size)
	{
		*dest++ = *src++;
		len++;
	}
	*dest = '\0';
	return (len);
}
