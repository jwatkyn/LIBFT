#include "ft_header.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n))
		return (0);
	return (1);
}
