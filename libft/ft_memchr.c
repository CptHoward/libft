/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:40:27 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 16:43:35 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	chr;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == chr)
			return (src + i);
		else
			i++;
	}
	return (NULL);
}
