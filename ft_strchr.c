/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:12:19 by egatien           #+#    #+#             */
/*   Updated: 2024/11/04 17:54:19 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cha;

	cha = (unsigned char)c;
	while (*s)
	{
		if (*s == cha)
			return ((char *)s);
		s++;
	}
	if (cha == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
    printf("%s \n",ft_strchr("non desole",'t'));
    printf("%s \n",ft_strchr("tnon desoleyt",'t'));
}
*/
