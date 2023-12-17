/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:42:21 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/16 13:58:34 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main()
{
	int		i;
	int		j;
	
	i = 5;
	j = 7;

	printf("Before: %d - %d\n", i, j);
	ft_swap(&i, &j);
	printf("After: %d - %d\n", i, j);
}*/
