/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:09:55 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/11 12:14:46 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*p;
	int		i;

	i = 0;
	size = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * (size + 1 ));
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
