/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:05:49 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/25 18:57:03 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (j < len)
				p[j++] = s[i++];
			p[j] = '\0';
			break ;
		}
		i++;
	}
	return (p);
}
/*
int main()
{
	printf("%s",ft_substr("tripouille", 100, 1));
	//printf("\n%s",substr("tripouille", 100, 1));
}*/
