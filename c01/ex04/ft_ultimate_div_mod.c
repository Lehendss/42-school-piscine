/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:13:53 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/16 13:54:37 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
#include <stdio.h>
int	main()
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
}*/
