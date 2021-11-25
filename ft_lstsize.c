/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:25:01 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/24 18:54:56 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int main()
{
	t_list *head = NULL;
	t_list *first = ft_lstnew((int *)1);
	t_list *second = ft_lstnew((int *)2);
	t_list *theard = ft_lstnew((int *)3);

	ft_lstadd_front(&head, first);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, theard);
	t_list *tmp = head;
	while(head)
	{
		printf("%d\t",(int )head->content);
		head = head->next;
	}
	printf("\n%d",ft_lstsize(tmp));
}*/
