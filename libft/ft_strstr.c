/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:46:23 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:15:24 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned char	*h;
	unsigned char	*n;
	size_t			i;
	size_t			k;
	size_t			size;

	i = 0;
	size = ft_strlen(needle);
	h = (unsigned char *)haystack;
	n = (unsigned char *)needle;
	if (!n || *n == '\0')
		return ((char *)haystack);
	while (h[i])
	{
		k = 0;
		while (h[i + k] == n[k])
		{
			if (k == size - 1)
				return ((char *)haystack + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
