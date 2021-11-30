/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:12:20 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/30 01:55:17 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy;

	if (!lst)
		return (NULL);
	lst_cpy = (t_list *) malloc(sizeof(t_list));
	if (lst_cpy == NULL)
		ft_lstdelone(lst_cpy, (*del));
	else
	{
		lst_cpy->content = f(lst->content);
		lst_cpy->next = ft_lstmap(lst->next, (*f), (*del));
	}
	return (lst_cpy);
}
