/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <ecarchi-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:17:52 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/14 22:08:38 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a < 123)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
}
*/
