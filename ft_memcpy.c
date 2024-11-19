/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:27:02 by egatien           #+#    #+#             */
/*   Updated: 2024/11/04 16:32:08 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s == NULL && d == NULL)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main  ()
{

}
*/
