/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 15:58:57 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/14 16:02:11 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strcpy(char *dst, const char *src)
{
	if (src = NULL)
		return (NULL);
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst);
}
