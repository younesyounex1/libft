/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:14:35 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/26 15:00:34 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	nbr_of_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	check = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			check++;
			i++;
		}
		if (check != 0)
			j++;
		check = 0;
	}
	return (j);
}

static size_t	wordlen(char const *s, char c, size_t index)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	check = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			check++;
		}
		if (check != 0)
			j++;
		if (j == index)
			return (check);
		check = 0;
		i++;
	}
	return (0);
}

static char	**ft_free(char **p, size_t i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
	return (NULL);
}

static char	**ft_malloc(char const *s, char c)
{
	char	**p;
	size_t	i;

	i = 0;
	p = malloc(sizeof(char *) * (nbr_of_words(s, c) + 1));
	if (p == NULL)
		return (NULL);
	while (i < nbr_of_words(s, c))
	{
		p[i] = malloc(wordlen(s, c, i + 1) + 1);
		if (p[i] == NULL)
			return (ft_free(p, i));
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	k;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	p = ft_malloc(s, c);
	if (!p)
		return (0);
	while (k < nbr_of_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			p[k][j++] = s[i++];
		if (j)
			p[k++][j] = 0;
		j = 0;
	}
	p[k] = NULL;
	return (p);
}

// int main() {
// 	char string[5000] = "Tripo";
// 	char** token = ft_split("lorem ipsum dolor sit amet, 
//consectetur adipiscing elit. Sed non risus. 
//Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, 
//ultricies sed, dolor. Cras elementum ultricies 
//diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
// 	int i = 0;
// 	while (token[i])
// 		printf("%s\n", token[i++]);
//    return 0;
// }
