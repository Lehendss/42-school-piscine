/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <ecarchi-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:18:18 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/14 22:08:49 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 122;
	while (z > 96)
	{
		write(1, &z, 1);
		z--;
	}
}
/*
int	main()
{
	ft_print_reverse_alphabet();
}*/
