/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:37 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/07 13:48:39 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	* ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dst)
	{
		while(0 < --len)
		{
			*(char *)(dst + len) = *(char *)(src + len);
		}
	}
	else
	{
		while(i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
