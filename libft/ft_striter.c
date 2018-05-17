#include "ft_header.h"

void	ft_striter(char *s, void (f*)(char *))
{
	if (s)
	{
		while (*s)
		{
			*s = f(*s);
			*s++;
		}
	}
}
