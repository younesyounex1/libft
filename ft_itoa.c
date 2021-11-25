/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:35:16 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/24 19:31:37 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_resulte_nb_p(long nb)
{
	int		len;
	char	*p;

	len = ft_nbrlen(nb);
	p = (char *) malloc(len + 1);
	if (p == NULL)
		return (NULL);
	p[len] = '\0';
	while (len-- > 0)
	{
		p[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (p);
}

static char	*ft_resulte_nb_n(long nb)
{
	int		len;
	char	*p;

	nb = -nb;
	len = ft_nbrlen(nb) + 1;
	p = (char *) malloc(len + 1);
	if (p == NULL)
		return (NULL);
	p[0] = '-';
	p[len] = '\0';
	while (len > 1)
	{
		p[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;

	if (n >= 0)
		p = ft_resulte_nb_p((long) n);
	else
		p = ft_resulte_nb_n((long ) n);
	return (p);
}
