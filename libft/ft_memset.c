/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:43:49 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/22 09:25:42 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;

	dst = (unsigned char *)b;
	while (dst < (unsigned char *)b + len)
		*(dst++) = (unsigned char)c;
	return (b);
}
