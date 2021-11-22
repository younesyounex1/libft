/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:10:08 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/22 19:27:50 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*void    ft_free(void *data)
{
    char    *con;
	//con = data;
    while (*con)
    {
        *con = 0;
        con++;
    }
}
*/
/*
void    del(void* s)
{
	int i;
	i = 0;
	char *p = (char *)s;
	while (p[i])
	{
		p[i] = '\0';
		i++;
	}
}
*/
/*
int main()
{
    t_list    *node = ft_lstnew(ft_strdup("hell hell"));
    printf("%s\n",node->content);
    ft_lstdelone(node, del);
    for (int i = 0; i < 9; i++)
        printf("%d",((char *)node->content)[i]);
    return (0);
}
*
int    main()
{
    t_list *lst;

    lst = ft_lstnew("hello");
    printf("%s\n", (char *)lst->content);
    ft_lstdelone(lst, del);
    printf("%s\n", (char *)lst->content);
}


