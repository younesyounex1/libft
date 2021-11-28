/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:12:20 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/27 19:32:22 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*tmp;
	int		size;
	t_list	*p;
	int		i;

	tmp = lst;
	i = 0;
	size = ft_lstsize(lst);
while(tmp)
	{
		f(tmp->content);
		p->content = tmp->content;
		del(tmp->content);
		tmp = lst->next;
		free(tmp);
		//p->;
	}
	return (p);
}
*/
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy;
	t_list	*tmp;
	int		size;

	size = ft_lstsize(lst);
	tmp = lst;
	ft_lstiter(lst, f(lst->content));
	lst_cpy = (t_list *) malloc(sizeof(t_list));
	if (lst_cpy == NULL)
		return (NULL);
	while (lst != NULL)
	{
		lst_cpy->content = lst->content;
		lst_cpy->next = lst->next;
		del(lst->content);
		free(lst);
		lst = lst_cpy->next;
	}
	return (lst_cpy);
}
*/
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
