/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 09:10:47 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/18 15:29:32 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	str = (char**)malloc(sizeof(char*) * ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && j < ft_strlen(s))
			j++;
		if (i < j)
			str[k++] = ft_strsub(s, i, (j - i));
		i = j;
	}
	str[k] = NULL;
	return (str);
}
