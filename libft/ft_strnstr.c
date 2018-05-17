/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:52:39 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 14:40:08 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	if (!*little)
		return ((char*)(big));
	if (ft_strlen(little) > ft_strlen(big))
		return (NULL);
	i = 0;
	while (*big && ft_strncmp(big, little, len_1))
	{
		if (!(i < len))
			return (NULL);
		i++;
		big++;
	}
	return ((char*)(big));
}
