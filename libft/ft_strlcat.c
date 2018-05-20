/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:51:15 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 08:39:43 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	len = 0;
	while (len < size && dst[len])
	{
		len++;
		dst++;
	}
	if (len == size)
	{
		*dst = '\0';
		return (len);
	}
	while (*dst)
		dst++;
	while (*src && len < size)
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
