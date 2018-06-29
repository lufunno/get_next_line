/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:52:33 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/05/26 11:31:12 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*holder;

	holder = 0;
	if (c == 0)
	{
		return ((char*)(s + (ft_strlen((char*)s))));
	}
	while (*s && *s != '\0')
	{
		if (*s == c)
			holder = (char*)s;
		s++;
	}
	return (holder);
}
