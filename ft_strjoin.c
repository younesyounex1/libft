/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:07:08 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/28 22:51:36 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	check_len(char const *s1, char const *s2)
{	
	if (s2 == NULL)
		return (ft_strlen(s1));
	else
		return (ft_strlen(s1) + ft_strlen(s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	len = check_len(s1, s2);
	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		if (i < ft_strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[j++];
		i++;
	}
	p[i] = '\0';
	return (p);
}
