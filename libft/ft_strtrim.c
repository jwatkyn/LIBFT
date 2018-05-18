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
	size_t	i;
	size_t	min;
	size_t	max;
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s)
	{
		i++;
		s1++;
	}
	min = i;
	if (i == ft_strlen(s))
		return (NULL);
	i = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
	}
	max = i;
	len = max - min;
	str = ft_strnew(str, len);

