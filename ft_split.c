/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:14:35 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/25 22:58:16 by yelousse         ###   ########.fr       */
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
		while (s[i] != c && s[i] )
		{
			i++;
			check ++;
		}
		if (check != 0)
			j++;
		check = 0;
		i++;
	}
	return (j);
}

static size_t wordlen(char const *s, char c, size_t index)
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

static void	ft_free(char **p, size_t i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
}

char **ft_split(char const *s, char c)
{
	char	**p;
	size_t	k;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	k = -1;
	printf("number of words : %zu\n",nbr_of_words(s,c));
	if (s)
	{
		p = malloc(sizeof(char *) * (nbr_of_words(s,c) + 1));
		if (p == NULL)
			return (NULL);
		while (i < nbr_of_words(s,c))
		{
			p[i] = malloc( wordlen(s,c,i + 1) + 1);
		printf("word lenght : %zu\n",wordlen(s,c,i + 1));
			if (p[i] == NULL)
				ft_free(p, i);	
			i++;
		//printf("i = %zu\n",i);
		}
		i = 0;
		while (s[i])
		{
			if (s[i] != c && s[i])
				k++;
			while (s[i] != c && s[i])
			{
				p[k][j] = s[i];
		printf("p[%zu][%zu] = %c\n",k,j,s[i]);
				j++;
				i++;
			}
			if (j != 0)
				p[k][j] = '\0';
			j = 0;
			i++;
		}
		p[k + 1] = NULL;
		return (p);
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "Hello THERE friends i hate you!";
	char **p;
	p = ft_split(str,32);
	while (p != NULL)
	{
		printf("%s",*p);
	}
}
*/
/*
int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}
*/

int main() {
   char string[5000] = "Tripouille";
   // Extract the first token
   char** token = ft_split(string,0);
   int i = 0;
   // loop through the string to extract all other tokens
   while(  *(token + i) != NULL ) {
      printf( "%s\n", *(token + i) ); //printing each token
      //token = strtok(NULL, " ");
	  i++;
   }
   return 0;
}
