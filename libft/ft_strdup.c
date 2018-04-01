/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:10:28 by rhrab             #+#    #+#             */
/*   Updated: 2017/11/30 21:21:50 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s);
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
