#include "ft_header.h"

int	ft_isascii(int c)
{
	if (!(c & ~0x7f))
		return (1);
	return (0);
}
