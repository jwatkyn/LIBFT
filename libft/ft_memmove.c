/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:11:28 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/21 08:42:33 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*s1;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	s1 = (unsigned char *)malloc(sizeof(unsigned char) * n);
	i = 0;
	while (i < n)
	{
		s1[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = s1[i];
		i++;
	}
	return (dst);
}
