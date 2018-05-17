/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:24:29 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 15:01:39 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*s;
	void	*d;
	size_t	i;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		*d = *s;
		if (*dest == c)
			return (dest);
		d++;
		s++;
	}
	return (NULL);
}
