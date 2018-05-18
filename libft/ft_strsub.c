/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:49:16 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 07:49:18 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	if (len == 0)
		return (NULL);
	str = ft_strnew(len)
	if (!str)
		return (NULL);
	while (i < len)
	{
		*str = s[len + i];
		str++;
		i++;
	}
	return (str);
}
