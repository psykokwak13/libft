/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:46:55 by egatien           #+#    #+#             */
/*   Updated: 2024/10/27 18:02:34 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	int		space;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		return (size + src_size);
	space = size - dst_size - 1;
	if (space >= 0)
		ft_strncat(dst, src, space);
	dst[size - 1] = '\0';
	return (dst_size + src_size);
}

/*
int main ()
{

}
*/
