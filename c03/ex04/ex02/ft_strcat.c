/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:09:54 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/26 17:34:11 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = " evaluator!";
	char dest[] = "Hello";

	ft_strcat(dest, src);
	printf("My function: %s\n", dest);
	
	char src2[] = " evaluator!";
	char dest2[] = "Hello";

	strcat(dest2, src2);
	printf("Original function: %s\n", dest);
}*/
