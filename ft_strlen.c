/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:16:41 by egatien           #+#    #+#             */
/*   Updated: 2024/10/22 12:54:24 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	nbr;

	nbr = 0;
	while (str[nbr] != '\0')
		nbr++;
	return (nbr);
}
/*
int main ()
{
	printf("%d",ft_strlen("oui oui allez"));
	return (1);
}
*/
