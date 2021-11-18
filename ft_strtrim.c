/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:44:30 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/16 01:20:08 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t	findLenInFirst(char const *s1, char const *set)
{
	size_t	i;
	size_t	check;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		while(set[j])
		{
			check = 0;
			if (s1[i] == set[j])
			{
				check++;
				break;
			}
			j++;
		}
		if (check == 0)
			break;
		j = 0;
		i++;
	}
	return (i);
}

size_t	findLenInLast(char const *s1, char const *set, size_t first)
{
	size_t	i;
	size_t	check;
	size_t	j;

	j = 0;
	i = ft_strlen(s1);
	while (first < i)
	{
		while(set[j])
		{
			check = 0;
			if(s1[i - 1] == set[j])
			{
				check++;
				break;
			}
			j++;
		}
		if (check == 0)
			break;
		j = 0;
		i--;
	}
	return (ft_strlen(s1) - i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*p = NULL;
	size_t	len;
	size_t	i;
	size_t	first;
	size_t	last;

	i = 0;
	first = findLenInFirst(s1,set);
	last = findLenInLast(s1,set,first);
	len = ft_strlen(s1) - first - last;
	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = s1[first + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int main()
{
	char str[] = ",,,,,,,,,,,,,,,,,";
	printf("%s",ft_strtrim(str,","));
}
