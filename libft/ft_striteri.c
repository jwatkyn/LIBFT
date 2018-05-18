/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:48:08 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/18 07:48:09 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_striteri(char *s, void (f*)(unsigned int, char *))
{
	size_t i;
	size_t n;

	i = 0;
	n = ft_strlen(s);
	if (s)
	{
		while (i < n)
		{
			*s = f(i, *s);
			s++;
		}
	}
}
