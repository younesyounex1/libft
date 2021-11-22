/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:35:16 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 19:19:13 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;
	int		check;
	int		i;
	long	nb;

	nb = n;
	check = 0;
	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
		check++;
	}
	len += ft_nbrlen(nb);
	p = (char *) malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	if (check > 0)
		p[0] = '-';	
	p[len] = '\0';
	while (nb)
	{
		p[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (p);
}
/*
int	main()
{
	printf("%s",ft_itoa(-2147483648));
}*/
