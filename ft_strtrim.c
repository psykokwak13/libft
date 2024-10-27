/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:55:28 by egatien           #+#    #+#             */
/*   Updated: 2024/10/27 18:30:50 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
int main(void)
{
    char *s1 = "errOUIerr";
    char *set = "err";
    char *trimmed;
    trimmed = ft_strtrim(s1, set);
    if (trimmed == NULL)
    {
        printf("Erreur\n");
    }
    else
    {
        printf("%s\n", s1);
        printf("%s\n", trimmed);
        free(trimmed);
    }

    return 0;
}
*/
