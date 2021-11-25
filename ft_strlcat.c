/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:14:59 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/24 19:07:31 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	x;
	size_t	j;

	j = 0;
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendest)
		return (dstsize + lensrc);
	x = lendest + lensrc;
	while (src[j] && lendest + 1 < dstsize)
	{
		dst[lendest] = src[j];
		j++;
		lendest++;
	}
	dst[lendest] = '\0';
	return (x);
}
