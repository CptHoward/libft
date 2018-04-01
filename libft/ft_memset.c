/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:12:23 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:25:24 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	unsigned char	chr;
	size_t			i;

	i = 0;
	dst = (unsigned char *)b;
	chr = (unsigned char)c;
	while (i < len)
	{
		dst[i] = chr;
		i++;
	}
	return (dst);
}
