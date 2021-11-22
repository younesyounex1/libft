/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:20:45 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 22:12:23 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		if (((char *)s)[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
