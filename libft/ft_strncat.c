/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:51:48 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 10:51:50 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t counter;

	len = ft_strlen(dest);
	len++;
	counter = 0;
	while(*src && counter < (n - 1))
	{
		dest[len] = *src;
		len++;
		src++;
		counter++;
	}
	dest[len] = '\0';
	return (dest);
}
