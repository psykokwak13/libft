/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:27:32 by egatien           #+#    #+#             */
/*   Updated: 2024/11/06 10:38:56 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	ca;

	ca = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == ca)
			last = (char *)s;
		s++;
	}
	if (ca == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
int main ()
{
    printf("%s \n",ft_strrchr("teste",'\0'));
    printf("%s \n",ft_strrchr("teste",'\0'));
}
*/
