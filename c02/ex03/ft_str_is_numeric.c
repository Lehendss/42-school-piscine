/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:05:53 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/19 10:27:23 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char string[]= "asds";
	printf("%d\n", ft_str_is_numeric(string));
}*/
