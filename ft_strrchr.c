/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:27:32 by egatien           #+#    #+#             */
/*   Updated: 2024/10/24 10:52:21 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*last_occurrence;

	last_occurrence = NULL;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			last_occurrence = (char *)&s[index];
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (last_occurrence);
}

/*
int main ()
{
    printf("%s \n",ft_strrchr("non desole",'t'));
    printf("%s \n",ft_strrchr("non tesole",'t'));
}
*/
