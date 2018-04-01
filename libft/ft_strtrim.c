/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhrab <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:27:47 by rhrab             #+#    #+#             */
/*   Updated: 2017/12/14 22:11:35 by rhrab            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		sz;
	int		i;
	int		k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	sz = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[sz] == ' ' || s[sz] == '\n' || s[sz] == '\t' || s[sz] == '\0')
		sz--;
	if (sz - i < 0)
		return ("");
	str = (char *)malloc(sizeof(char) * ((sz - i) + 2));
	if (!str)
		return (NULL);
	while (s[i] && i <= sz)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
/*
int		main(void)
{
	char			str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
	char			str2[] = "Bonjour";
	char			str3[] = "  \t\t\t   ";
	char			*r;

	ft_strtrim(NULL);
	r = ft_strtrim(str);
	if (strcmp(r, "Bon\t \njour"))
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t    \t\nBon\t \njour\t\n  \n     \").\nExpected ret = \"Bon\t \njour\" \
			   but have ret = \"%s\"\033[0m\n", __LINE__ - 2, __func__, r);
		free(r);
		return (0);
	}
	free(r);
	r = ft_strtrim(str2);
    if (strcmp(r, "Bonjour") || (str2 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"Bonjour\").\nExpected ret = \"Bonjour\" and differents pointers\
			   but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str2, r);
		free(r);
        return (0);
    }
    free(r);
	r = ft_strtrim(str3);
    if (strcmp(r, "") || (str3 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t\t\t  \").\nExpected ret = \"\" and different\
s pointers but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str3, r);
		free(r);
        return (0);
    }
    free(r);
	return (1);
	}
	*/
