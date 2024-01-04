/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:35:29 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/28 18:59:26 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	less;
	int	n;

	i = 0;
	less = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less = less * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	n = n * less;
	return (n);
}
/*
int	main(void)
{
	int	val;
	char	str[50];

	strcpy(str, "     ---+--+1234ab567");
	val = ft_atoi(str);
	printf("'FT_ATOI' String value = %s, Int value = %d\n", str, val);
	return (0);
}*/
