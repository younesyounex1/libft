/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:38:12 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/18 00:39:36 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb =< 9)
		c = nb + 48;
		ft_putchar_fd(c , fd);
	if (nb > 9)
	{
	ft_putnbr_fd(n / 10);
	c = (nb % 10) + 48;
	}
}
