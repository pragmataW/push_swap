/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:43:13 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/17 10:14:15 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*max_finder(t_stack **root, int tag)
{
	t_stack	*iter;

	iter = *root;
	while (iter)
	{
		if (iter->tag == tag)
			return (iter);
		iter = iter->next;
	}
	return (NULL);
}

void	rotater(t_stack **root, int index, char opt)
{
	int	reverse_loop;
	int	loop;

	reverse_loop = lst_size(root) - index + 1;
	loop = index - 1;
	if (opt == 'r')
	{
		while (loop)
		{
			ft_rotate(root, 'b');
			loop--;
		}
	}
	else if (opt == 'R')
	{
		while (reverse_loop)
		{
			ft_r_rotate(root, 'b');
			reverse_loop--;
		}
	}
}

// we gave tag + 3 because while we push to be we left 3 element in a stack

void	push_swap_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		median;
	int		tag;
	t_stack	*max;

	median = lst_size(stack_b) / 2;
	tag = lst_size(stack_b) + 3;
	while (*stack_b)
	{
		max = max_finder(stack_b, tag);
		if (max->index <= median)
			rotater(stack_b, max->index, 'r');
		else
			rotater(stack_b, max->index, 'R');
		ft_push(stack_a, stack_b, 'a');
		tag--;
	}
	ft_r_rotate(stack_a, 'a');
	ft_r_rotate(stack_a, 'a');
	ft_r_rotate(stack_a, 'a');
}
