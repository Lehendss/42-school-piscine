/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:03:26 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/26 17:34:29 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[] = " evaluator!";
	char dest[] = "Hello";
	unsigned int nb = 13;

	ft_strncat(dest, src, nb);
	printf("My function: %s\n", dest);
	
	char src2[] = " evaluator!";
	char dest2[] = "Hello";

	strncat(dest2, src2, nb);
	printf("Original function: %s\n", dest2);
}*/
