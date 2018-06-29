/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:03:15 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/11 08:33:11 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	ft_memset(str, 0, size);
	return (str);
}
