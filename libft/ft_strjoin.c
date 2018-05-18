/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:24:28 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 11:39:01 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_len;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str1_len = ft_strlen(s1);
	len = str1_len + ft_strlen(s2);
	str = ft_strnew(len);
	ft_strcpy(str, s1);
	ft_strcpy(str + str1_len, s2);
	return (str);
}
