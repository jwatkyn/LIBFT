/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:39:12 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/24 13:50:32 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	max;
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	max = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[min++]))
		;
	if (min == max + 2)
	{
		str = "";
		return (str);
	}
	while (ft_iswhitespace(s[max--]))
		;
	len = max - min + 3;
	if (!(str = ft_strnew(sizeof(char) * len)) || str == NULL)
		return (NULL);
	if (max > min)
		ft_strncpy(str, s + (min - 1), len);
	return (str);
}
