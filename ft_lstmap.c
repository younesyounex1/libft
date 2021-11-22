/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:12:20 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 19:29:30 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*tmp;
	int		size;
	t_list	*p;
	int		i;

	tmp = lst;
	i = 0;
	size = ft_lstsize(lst);
	p = (t_list *) malloc(sizeof(t_list ) * size);
	if (p == NULL)
	{
		//free(p);
		return (NULL);
	}
	while(tmp)
	{
		f(tmp->content);
		p->content = tmp->content;
		del(tmp->content);
		tmp = lst->next;
		free(tmp);
		p->;
	}
	return (p);
}
