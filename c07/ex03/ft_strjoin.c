/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 21:44:02 by ecarchi-          #+#    #+#             */
/*   Updated: 2024/01/02 22:49:32 by ecarchi-         ###   ########.fr       */
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

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_string;
	int		i;
	int		j;
	int		i_s;

	if (size == 0)
	{
		new_string = (char *)malloc(sizeof(char));
		*new_string = 0;
		return (new_string);
	}
	new_string = (char *)malloc(sizeof(char) * ft_total_size(size, strs, sep));
	i = -1;
	i_s = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			new_string[i_s++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			new_string[i_s++] = sep[j++];
	}
	new_string[i_s] = '\0';
	return (new_string);
}
/*
#include <stdio.h>
int	main(void)
{
	char *vector[5];
	vector[0] = "STRING1";
	vector[1] = "STRING2";
	vector[2] = "STRING3";
	vector[3] = "STRING4";
	vector[4] = "STRING5";

	printf("%s\n", ft_strjoin(0, vector, "|this_is_a_space|"));
	//size * (ft_strlen(*strs) + ft_strlen(sep))
	return (0);
}*/
