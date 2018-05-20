#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char	*n;

	n = ft_itoa(nbr);
	if (n != NULL)
		ft_putstr_fd(n, fd);
}
