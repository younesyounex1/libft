/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:56:01 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/09 15:11:45 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t size;

	size = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + size);
	while (*(s + (--size)))
	{
		if (*(s + size) == c)
			return ((char *)(s + size));
	}
	return (NULL);
}
