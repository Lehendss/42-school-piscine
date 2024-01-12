/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:21:48 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/19 09:29:56 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char string[]= "Resting";
	printf("%d\n", ft_str_is_lowercase(string));
}*/
