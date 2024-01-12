/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:46:45 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/20 21:58:05 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char source[] = "String_to_copy";
	char dest[] = "AaaaaaaaaZ";
	printf("%s\n", source);
	ft_strncpy(dest, source, 3);
	printf("My copy: %s\n", dest);
    strncpy(dest, source, 3);
	printf("Real: %s\n", dest);
}*/
