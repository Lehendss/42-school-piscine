/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:26:15 by ecarchi-          #+#    #+#             */
/*   Updated: 2024/01/02 22:03:52 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*vector;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	vector = (int *)malloc((max - min) * sizeof(int));
	if (vector == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		vector[i] = min;
		i++;
		min++;
	}
	*range = vector;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{	
	int	i;
	int *range;
	int	min;
	int max;
	int size;
	
	min = 10;
	max = 20;
	size = max - min;
	i = 0;
	printf("The range is: %d\n",ft_ultimate_range(&range, min, max));
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
