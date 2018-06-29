/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:31:01 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/09 15:56:22 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	if (a < b)
		while (len--)
		{
			b[len] = a[len];
		}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
