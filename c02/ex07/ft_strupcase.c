/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:14:03 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/19 10:28:16 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			str[i] = str[i] - 32;
	}
	return (str);
}
/*
int	main()
{
	char string[] = "hi_there_dear_evaluator :)";
	
	printf("%s\n", ft_strupcase(string));
}*/
