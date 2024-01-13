/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:43:55 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/26 22:07:18 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "cuentame la vida";
	char	to_find[] = "ae";
	char *find;
    char *find2;

	find = ft_strstr(str, to_find);
	printf("Mine: %s\n", find);
    find2 = strstr(str, to_find);
    printf("Original: %s\n", find2);
}*/
