/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:32:19 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:26:27 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	chr;
	size_t			i;

	i = 0;
	chr = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		if (s[i] == chr)
		{
			d[i] = s[i];
			return (d + i + 1);
		}
		else
			d[i] = s[i];
		i++;
	}
	return (NULL);
}
