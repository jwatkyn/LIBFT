/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:22:11 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 12:28:42 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char *d;

	d = (unsigned char *)dst;
	while (n)
	{
		n--;
		d[n] = (unsigned char)c;
		d++;
	}
	return (dst);
}
