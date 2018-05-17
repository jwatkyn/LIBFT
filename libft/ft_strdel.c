#include <stdlib.h>
#include "ft_header.h"

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return (NULL);
	free(*as);
	*as = NULL;
	return (NULL);
}
