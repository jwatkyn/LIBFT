/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:26:18 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/17 12:30:56 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_bzero(void *s, size_t n)
{
	void *d;

	d = s;
	while (n)
	{
		d = 0;
		n--;
		d++;
	}
}