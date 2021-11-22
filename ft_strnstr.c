/* ************************************************************************** */

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


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int	lenneedle;
	int	check;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	lenneedle = ft_strlen(needle);
	while (i < len && *haystack)
	{
		check = 0;
		while (*haystack == *(needle + (++check)) && i < len)
		{
			haystack++;
			i++;
		}
		//printf("%d || %d", check, lenneedle);
		if (check == lenneedle)
			return ((char *)haystack - check);
		i++;
		haystack++;
	}
	return (NULL);
}/*
#include<stdio.h>
int main()
{
	char *s1 = "A";
	char *i1 = strnstr(s1, s1, 2);
	char *i2 = ft_strnstr(s1, s1, 2);
	printf("%s",i2);
}*/
