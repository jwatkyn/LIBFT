#insert "ft_header.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t counter;

	len = ft_strlen(dest);
	len++;
	counter = 0;
	while(*src && counter < (n - 1))
	{
		dest[len] = *src;
		len++;
		src++;
		counter++;
	}
	dest[len] = '\0';
	return (dest);
}
