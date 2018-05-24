/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwatkyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:03:33 by jwatkyn           #+#    #+#             */
/*   Updated: 2018/05/24 16:19:02 by jwatkyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(const char *s, char c)
{
	int count;

	count = 0;
	if (*s)
	{
		while (*s != c && *s)
		{
			count++;
			s++;
		}
	}
	return (count);
}

static int	ft_countwords(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (count);
		while (*s != c && *s)
			s++;
		count++;
	}
	return (count);
}

static int	ft_word(char **words, char *s, int i, int c)
{
	char	*nword;
	int		len;

	len = ft_wordlen(s, c);
	if (!(nword = ft_strnew(len)))
		return (-1);
	ft_strncpy(nword, s, len);
	words[i] = nword;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		flag;
	int		i;

	flag = 0;
	i = 0;
	if (!(words = (char **)malloc(sizeof(char *) * ft_countwords(s, c))))
		return (NULL);
	while (s && *s)
	{
		if (*s != c && flag == 0)
		{
			flag = ft_word(words, (char *)s, i, c);
			i++;
			if (flag == -1)
				return (NULL);
		}
		if (flag == 1)
			if (*s == c)
				flag = 0;
		s++;
	}
	words[i] = 0;
	return (words);
}
