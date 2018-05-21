/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:45:48 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 07:45:49 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	digit;
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	digit = nbr % 10;
	ft_putchar(digit + '0');
}
