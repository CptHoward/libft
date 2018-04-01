/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:36:22 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/11 21:41:19 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		i = 1;
		while (i <= len)
		{
			d[len - i] = s[len - i];
			i++;
		}
		return (d);
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (d);
}
