/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:20:45 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/10 17:05:34 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
