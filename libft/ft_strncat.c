/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:35:28 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:17:37 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			k;

	i = ft_strlen(s1);
	k = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (s[k] && k < n)
	{
		d[i + k] = s[k];
		k++;
	}
	d[i + k] = '\0';
	return ((char *)d);
}
