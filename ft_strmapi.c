/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:01:09 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/17 19:44:51 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static char	f(unsigned int i, char c)
{
	i = 32;
	return (c + i);
 }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	int	i;
	char			*p;

	i =	 0;
	p = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		 p[i] = f(i, s[i]);
		 i++;
	}
	return (p);
}

int main()
{
	printf("%s", ft_strmapi("ADCVSF",&f));
}
