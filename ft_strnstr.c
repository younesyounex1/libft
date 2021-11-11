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
	check = -1;
	if (!(*needle))
		return ((char *)haystack);
	lenneedle = ft_strlen(needle);
	while (i < len && *haystack)
	{
		while (*haystack == *(needle + (++check)) && i < len)
		{
			haystack++;
			i++;
			printf("%zu",i);
		}
		if (check == lenneedle)
			return ((char *)haystack - check);
		check = -1;
		i++;
		printf("%zu",i);
		haystack++;
	}
	return (NULL);
}
