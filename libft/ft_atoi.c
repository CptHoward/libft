/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 19:37:51 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/14 18:56:43 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		flag;
	int		digits;

	flag = 1;
	res = 0;
	digits = 1;
	while (*str == ' ' || *str == '\r' || *str == '\n' || *str == '\t' \
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = -1;
		str += 1;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = (10 * res) + (*str - 48);
		str++;
		digits++;
		if (digits > 18)
			return ((flag > 0) ? (-1) : (0));
	}
	return (res * flag);
}
