/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:58:03 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/24 18:46:03 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (new)
	{
		if (tmp)
		{	
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
		else
			*lst = new;
	}
}
/*
int main(){
	t_list *head = NULL;
	t_list *first = ft_lstnew((int *)1);
	t_list *second = ft_lstnew((int *)2);
	t_list *theard = ft_lstnew((int *)3);
	t_list *four = ft_lstnew((int *)4);

	ft_lstadd_front(&head, first);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, theard);
	t_list *tmp = head;
	while(tmp)
	{
		printf("%d\t",(int )tmp->content);
		tmp = tmp->next;
	}
	ft_lstadd_back(&head, four);
	tmp = head;
	printf("\n");
	while(tmp)
	{
		printf("%d\t",(int )tmp->content);
		tmp = tmp->next;
	}

}*/
