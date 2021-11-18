/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:45:31 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/18 00:42:51 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
# include <unistd.h>

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
void ft_putnbr_fd(int n, int fd);

typedef struct s_list 
{
	void	*content;
	struct	s_list *next; 
}	t_list;

#endif
