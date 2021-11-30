/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:17:09 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/30 16:17:19 by yelousse         ###   ########.fr       */
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
