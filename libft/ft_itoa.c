/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:23:18 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/17 08:39:57 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	int		digits;
	int		sign;
	char	*ret;

	sign = (n < 0) ? 1 : 0;
	digits = get_str_len(n);
	if (!(ret = ft_strnew((size_t)(digits + sign))))
		return (ret);
	if (sign)
		ret[0] = '-';
	else if (n > 0)
		digits--;
	else
		ret[0] = '0';
	while (n)
	{
		if (n > 0)
			ret[digits] = '0' + (n % 10);
		else
			ret[digits] = '0' + -(n % 10);
		n = n / 10;
		digits--;
	}
	return (ret);
}
