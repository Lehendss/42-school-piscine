/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 19:38:16 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/26 17:32:56 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello World";
	char s2[] = "Hello World";
	
	int	my_function = ft_strcmp(s1, s2);
	int	original_function = strcmp(s1, s2);

	if (my_function < 0)
	
		printf("Less than zero: %d\n", my_function);
	else if (my_function == 0)
	
		printf("Equal than cero: %d\n", my_function);
	else
	
		printf("More than cero: %d\n", my_function);
	
	if (original_function < 0)
	
		printf("Less than: %d\n", original_function);
	else if (original_function == 0)
	
		printf("Equal than cero: %d\n", original_function);
	else
	
		printf("More than cero: %d\n", original_function);
	
}*/
