/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:44:32 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 07:44:35 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*str)
	{
		if ((unsigned char)(*str) == c)
			return (str);
		str++;
	}
	return (NULL);
}
