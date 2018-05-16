/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:02:28 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/14 16:06:07 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (*src && i < len)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst == '\0';
	return (dst);
}
