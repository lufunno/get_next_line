/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 09:40:39 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/05/31 14:59:16 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			length;
	char		*large;
	char		*small;

	if (*s2 == '\0')
		return ((char *)s1);
	large = (char *)s1;
	small = (char *)s2;
	i = 0;
	length = ft_strlen(small);
	while (large[i] != '\0' && (i + length) <= n)
	{
		if (ft_strncmp((large + i), small, length) == 0)
		{
			return (large + i);
		}
		i++;
	}
	return (NULL);
}
