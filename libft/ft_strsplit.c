#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i])
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1])
				count++;
			i++;
		}
	}
	return (count);
}

static char	*ft_makeword(char const *s, char c, int *i)
{
	int	j;
	int	k;
	char	*word;

	j = 0;
	k = 0;
	while (s[j] && s[j] != c)
		++j;
	*i = *i + j;
	word = ft_strnew(sizeof(char) * (j + 1));
	while (k < j)
	{
		word[k] = s[k];
		++k;
	}
	return (word);
}


char	**ft_strsplit(char const *s, char c)
{
	char **words;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(s) || !(words = (char**)malloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	if (s[i])
	{
		if (s[i] != c)
		{
			words[j] = ft_makeword(s, c, &i);
			j++;
		}
		while (s[i])
		{
			if (s[i] == c && s[1 + i] != c && s[i + 1])
			{
				words[j] = ft_makeword(s + i + 1, c, &i);
				j++;
			}
			else
				i++;
		}
	}
	words[j] = 0;
	return (words);
}
