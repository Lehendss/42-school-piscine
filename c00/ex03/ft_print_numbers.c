/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarchi- <ecarchi-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:18:42 by ecarchi-          #+#    #+#             */
/*   Updated: 2023/12/14 11:19:07 by ecarchi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = 47;
	while (++a < 58)
		write(1, &a, 1);
}
/*
int	main()
{
	ft_print_numbers();
    write(1, "\n", 1);
}*/
