/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:30:36 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 17:35:19 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			k;

	k = 0;
	i = (size_t)ft_strlen(s1);
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (s[k])
	{
		d[i + k] = s[k];
		k++;
	}
	d[i + k] = '\0';
	return ((char *)d);
}
