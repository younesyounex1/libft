/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:11:09 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/21 18:29:53 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = *lst;
		del(tmp->content);
		*lst = lst->next;
		free(tmp);
		//*lst = *tmp;
	}
}

