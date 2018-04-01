/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:53:34 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:15:49 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*h;
	unsigned char	*n;
	size_t			i;
	size_t			k;
	size_t			size;

	size = ft_strlen(needle);
	i = 0;
	h = (unsigned char *)haystack;
	n = (unsigned char *)needle;
	if (!n || *n == '\0')
		return ((char *)haystack);
	while (h[i] && i < len)
	{
		k = 0;
		while (h[i + k] == n[k] && (i + k) < len)
		{
			if (k == size - 1)
				return ((char *)h + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
