/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:12:49 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/11 10:51:24 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		lenneedle;
	int		check;
	size_t	j;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	lenneedle = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		check = 0;
		j = i;
		while (haystack[j] == needle[check] && j < len && haystack[j])
		{
			j++;
			check++;
		}
		if (check == lenneedle)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "aaabcabcd";
	char *i1 = "cd";
	char *i2 = ft_strnstr(s1, i1, 8);
	printf("%s\n",strnstr(s1, i1, 8));
	printf("|%s|",i2);
}*/
