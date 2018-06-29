/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:04:04 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/13 15:41:19 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	st;
	size_t	len;
	char	*str;

	st = 0;
	if (!s)
		return (NULL);
	while (((s[st] == ' ') || (s[st] == '\n')
				|| (s[st] == '\t')) && (s[st] != '\0'))
		st++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
				|| (s[len - 1] == '\t')) && (s[st] != '\0'))
		len--;
	str = ft_strsub(s, st, len - st);
	if (str)
		return (str);
	return (NULL);
}
