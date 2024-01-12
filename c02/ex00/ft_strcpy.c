/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:10:40 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/20 17:32:53 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	source[] = "Hellooo, there!";
	char	dest[] = "a";
	printf("Original string: [%s]\n", source);
	ft_strcpy(dest, source);
	printf("Copied string: [%s]\n", dest);
}
