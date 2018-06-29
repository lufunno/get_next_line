/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:50:44 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/15 09:11:11 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*dest;
	char		*src;
	size_t		i;

	i = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == ((char)c))
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
