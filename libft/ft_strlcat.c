/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:51:15 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 10:51:18 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;

	while (len < size && dest[len])
		len++;
	if (len == size)
		return (len);
	while (*dest)
		dest++;
	while (*src && len < size)
	{
		*dest++ = *src++;
		len++;
	}
	*dest = '\0';
	return (len);
}
