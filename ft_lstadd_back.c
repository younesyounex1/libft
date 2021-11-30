/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:58:03 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/29 23:16:02 by yelousse         ###   ########.fr       */
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
