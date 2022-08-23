/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:11:28 by avillard          #+#    #+#             */
/*   Updated: 2022/08/23 10:47:24 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//meme chose que malloc mais peut retourner une valeur nulle
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

//compte les blocs separe de *charset et retoune le nombre de bloc trouvé
static size_t	ft_bloccount(char const *s, char *charset)
{
	size_t	blks;
	size_t	word;
	int		i;

	blks = 0;
	word = 0;
	while (*s != '\0')
	{
		i = 0;
		while (charset[i])
		{
			if (*s == charset[i])
				word = 0;
			else if ((*s != charset[i]) && (word == 0))
			{
			word = 1;
				++blks;
			}
			++s;
			i++;
		}
	}
	return (blks);
}

//strlen mais qui s arrete a \0 ou a la premiere valeur de *charset
static size_t	ft_strclen(const char *s, char *charset)
{
	size_t	int_len;

	int_len = 0;
	while (s[int_len] != '\0' && s[int_len] != charset[0])
		int_len++;
	return (int_len);
}

//separe chaque grp de mots avec le str *charset
static char	**ft_split_words(char **arr, const char *s, const char *charset)
{
	int	pos;
	int	blk_len;

	pos = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			blk_len = ft_strclen(s, charset);
			arr[pos] = (char *)ft_calloc(blk_len + 1, sizeof(char));
			if (!arr[pos])
				return (NULL);
			ft_memcpy(arr[pos], s, (size_t)blk_len);
			s += blk_len;
			pos++;
		}
	}
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;

	arr = (char **)ft_calloc(ft_bloccount(str, charset) + 1, sizeof(char *));
	arr = ft_split_words(arr, s, c);
	return (arr);
}
