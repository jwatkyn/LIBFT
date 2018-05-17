/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:11:28 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 17:01:35 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *s;
	char *d;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d = s;
		d++;
		s++;
		i++;
	}
	return (dest);
}
