/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 12:54:00 by ecarchi-          #+#    #+#             */
/*   Updated: 2024/01/02 15:03:07 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vector;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	vector = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		vector[i] = min;
		i++;
		min++;
	}
	return (vector);
}
/*
#include <stdio.h>
int	main(void)
{	
	int	i;
	int	*vector;
	int	size;
	int	max;
	int min;
	
	i = 0;
	max = 2;
	min = 2;
	size = max - min;
	vector = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", vector[i]);
		i++;
	}
}*/
