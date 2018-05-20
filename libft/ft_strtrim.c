/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:39:12 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 14:04:15 by jwatkyn          ###   ########.fr       */
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
	while (ft_iswhitespace(s[min]) && min < max)
	{
		min++;
	}
	while (ft_iswhitespace(s[max]) && max > min)
	{
		max--;
	}
	len = max - min;
	if (max <= min)
		str = ft_strnew(sizeof(char));
	else
		str = ft_strnew(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	if (max > min)
		str = ft_strncpy(str, s + min, len);
	else
		str[0] = '\0';
	return (str);
}
