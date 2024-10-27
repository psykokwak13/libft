/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:10:20 by egatien           #+#    #+#             */
/*   Updated: 2024/10/27 17:41:30 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_memchr(const void *s, int searched, size_t size)
{
	const char	*arr;
	size_t		i;

	i = 0;
	arr = s;
	while (i < size)
	{
		if (arr[i] == (unsigned char) searched)
			return ((void *)(arr + i));
		i++;
	}
	return (NULL);
}

/*
int main() 
{

}
*/
