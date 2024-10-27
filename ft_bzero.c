/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:39:00 by egatien           #+#    #+#             */
/*   Updated: 2024/10/22 12:55:36 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*result;

	result = (unsigned char *) s;
	while (n--)
	{
		*result++ = 0;
	}
}
/*
int main() {
    char str[20] = "Hello, World!";
    printf("Avant ft_bzero: '%s'\n", str);
    ft_bzero(str, 5);
    printf("Après ft_bzero: '%s'\n", str);
    printf("Chaîne complète après ft_bzero: '%s'\n", str);
    return 0;
}
*/
