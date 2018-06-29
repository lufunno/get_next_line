/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbedzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:11:36 by lmbedzi           #+#    #+#             */
/*   Updated: 2018/06/15 08:04:56 by lmbedzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = ((char*)malloc(sizeof(char) * ft_strlen(s1) + 1));
	if (s2 == 0)
		return (0);
	else
		return (ft_strcpy(s2, s1));
}
