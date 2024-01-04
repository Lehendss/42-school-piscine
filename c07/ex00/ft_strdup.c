/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:46:29 by ecarchi-          #+#    #+#             */
/*   Updated: 2024/01/02 22:49:10 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dupled;
	int		i;

	dupled = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dupled[i] = src[i];
		i++;
	}
	dupled[i] = '\0';
	return (dupled);
}
/*
#include <stdio.h>
int	main(void)
{
	char string[] = "adsfsd\n\t***33  A  Z*#  N";
	printf("%s\n", ft_strdup(string));
	//printf("%d", ft_strlen(string));
	return (0);
}*/
