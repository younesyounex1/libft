/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:11:09 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/30 16:23:26 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*head;

	head = *lst;
	while (head)
	{
		tmp = head;
		head = head->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
