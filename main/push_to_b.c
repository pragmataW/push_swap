/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 01:01:55 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/17 09:48:58 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **a, t_stack **b, int argc)
{
	int	median;
	int	loop;

	while (lst_size(a) > 3)
	{
		median = lst_size(a) / 2;
		loop = lst_size(a);
		while (loop)
		{
			if ((*a)->tag >= median)
				ft_push(a, b, 'b');
			else
				ft_rotate(a, 'a');
			loop--;
		}
	}
	if (lst_size(a) == 3)
		ft_three(a, argc);
	else
		ft_two(a);
}
