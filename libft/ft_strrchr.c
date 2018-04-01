/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:40:42 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/14 18:52:01 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	chr;

	chr = (char)c;
	size = (int)ft_strlen(s);
	if (chr == '\0')
		return ((char *)(s + size));
	while (s[size - 1] && size >= 0)
	{
		if (s[size] == chr)
			return ((char *)(s + size));
		size--;
	}
	return (NULL);
}
