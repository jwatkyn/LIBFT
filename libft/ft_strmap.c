#include "ft_header.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	size_t i;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
