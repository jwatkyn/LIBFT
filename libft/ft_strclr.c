#include "ft_header.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		*s = '\0';
		*s++;
	}
}
