/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:34:30 by egatien           #+#    #+#             */
/*   Updated: 2024/10/22 12:41:02 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*result;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	result = malloc(total);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, total);
	return (result);
}
