/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:05:49 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 19:12:33 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (p == NULL || s == NULL)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while(j < len)
				p[j++] = s[i++];
			p[j] = '\0';
		}
		i++;
	}
	return (p);
}
