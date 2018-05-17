#include "ft_header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s))
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i])
		i++;
	}
	return (str)
}
