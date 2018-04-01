/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:55:21 by rhrab             #+#    #+#             */
/*   Updated: 2018/03/21 16:56:35 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, int size)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	else
		while (i < size)
		{
			dup[i] = s[i];
			i++;
		}
	dup[i] = '\0';
	return (dup);
}
