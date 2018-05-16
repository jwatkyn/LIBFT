#include "ft_header.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	if (!*needle)
		return ((char*)(haystack));
	len = ft_strlen(needle);
	while (*haystack && ft_strncmp(haystack, needle, len)
		haystack++;
	if (*haystack)
		return ((char*)(haystack));
	return (NULL);
}
