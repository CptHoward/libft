/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:49:03 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/11 20:13:58 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_cnt(char const *s, char c)
{
	size_t		i;
	size_t		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t		word_len;
	size_t		i;

	i = 0;
	word_len = 0;
	while (s[i] && s[i] != c)
	{
		word_len++;
		i++;
	}
	return (word_len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		k;
	char		**arr;

	i = 0;
	k = 0;
	if (!s || !c)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_word_cnt(s, c) + 2));
	if (!arr)
		return (NULL);
	while (s[i] && k < ft_word_cnt(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		arr[k] = (char *)malloc(sizeof(char) * (ft_word_len(&s[i], c) + 1));
		if (!arr[k])
			return (NULL);
		ft_strncpy(arr[k], s + i, ft_word_len(s + i, c));
		arr[k][ft_word_len(s + i, c)] = '\0';
		i += ft_word_len(s + i, c);
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
