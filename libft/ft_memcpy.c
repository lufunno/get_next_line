/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:28:15 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/15 09:53:59 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (char *)s2;
	dst = (char *)s1;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
