/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 17:59:36 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/14 22:05:47 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	long int	num;
	long int	digits;
	int			size;
	char		*s;

	size = 1;
	digits = 10;
	num = n;
	if (n < 0)
	{	
		num *= -1;
		size++;
	}
	while (num / digits > 0)
	{
		digits *= 10;
		size++;
	}
	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	size = 0;
	if (n < 0)
		s[size++] = '-';
	while ((digits /= 10) > 0)
		s[size++] = (num / digits) % 10 + 48;
	s[size] = '\0';
	return (s);
}
