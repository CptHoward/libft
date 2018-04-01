/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 15:35:54 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/03 15:57:45 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *arr;

	arr = (void *)malloc(size);
	if (!arr)
		return (NULL);
	arr = ft_bzero(arr, size);
	return (arr);
}
