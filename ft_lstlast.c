/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:19:33 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/24 18:50:46 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pl;

	pl = lst;
	while (pl)
	{
		if (pl->next == NULL)
			return (pl);
		pl = pl->next;
	}
	return (lst);
}
