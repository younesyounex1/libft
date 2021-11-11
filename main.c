/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:53:40 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/11 00:13:16 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

#define LIMIT 29

int main()
{
    char *haystack = "Eeny meeny miny moe!dsfhklhdfgflk";
    char *needle = "moe";
    char *location;

    location = strnstr(haystack,needle,LIMIT);
    if(location == NULL)
        printf("Can't find '%s' within %d characters of '%s'\n",
            needle,
            LIMIT,
            haystack);
    else
        printf("Found '%s' within %d characters of '%s'\n",
            needle,
            LIMIT,
            haystack);
		printf("\n%s",location);

    return(0);
}
