/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:28:45 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/15 09:26:09 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*f1;
	unsigned char		*f2;
	size_t				i;

	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (f1[i] != f2[i])
			return (f1[i] - f2[i]);
		i++;
	}
	return (0);
}
