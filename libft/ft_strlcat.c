/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:38:40 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/14 17:38:39 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		dst_len;

	d = dst;
	s = src;
	size = dstsize;
	while (*d && size-- != 0)
		d++;
	dst_len = d - dst;
	size = dstsize - dst_len;
	if (size == 0)
		return (dst_len + ft_strlen(src));
	while (*s)
	{
		if (size > 1)
		{
			*d++ = *s;
			size--;	
		}
		s++;
	}
	*d = '\0';
	return (dst_len + (s - src));
}
