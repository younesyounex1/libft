/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:18:25 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 16:27:00 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *) malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	(*p).content = content;
	(*p).next = NULL;
	return (p);
}
/*
int main()
{
	t_list *t;
	t = ft_lstnew("70");
	printf("%s", t->content);
}*/

