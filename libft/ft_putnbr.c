#include "ft_header.h"

void	ft_putnbr(int n)
{
	if (!n)
		return ;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
