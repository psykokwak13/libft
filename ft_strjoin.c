/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egatien <egatien@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:39:12 by egatien           #+#    #+#             */
/*   Updated: 2024/10/27 18:00:41 by egatien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	size_t		total;
	char		*result;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2)+1;
	if (total <= 0)
		return (NULL);
	result = malloc(total * sizeof(char));
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("oui", "non"));
}
*/
