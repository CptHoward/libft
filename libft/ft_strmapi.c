/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:36:55 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/03 18:15:38 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (f(i, s[i]))
		{
			str[k] = f(i, s[i]);
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}
