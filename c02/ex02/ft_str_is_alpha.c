/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 20:51:31 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/20 17:33:11 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char string[]= "HeKKKKlloo";
	printf("%d\n", ft_str_is_alpha(string));
}*/
