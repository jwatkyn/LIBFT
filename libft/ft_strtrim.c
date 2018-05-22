/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:39:12 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/22 07:47:41 by jwatkyn          ###   ########.fr       */
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
	while (ft_iswhitespace(s[max--]))
		;
	len = max - min;
	if (!(str = ft_strnew(sizeof(char) * len)))
		return (NULL);
	if (str == NULL)
		return (NULL);
	if (max > min)
		ft_strncpy(str, s + min, len);
	return (str);
}
