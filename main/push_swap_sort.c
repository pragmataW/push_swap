/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:43:13 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/19 05:41:25 by yciftci          ###   ########.fr       */
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
			ft_rotate(root, 'a');
			loop--;
		}
	}
	else if (opt == 'R')
	{
		while (reverse_loop)
		{
			ft_r_rotate(root, 'a');
			reverse_loop--;
		}
	}
}

void	push_swap_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		median;
	int		tag;
	int		a_size;
	t_stack	*max;

	a_size = lst_size(stack_a);
	median = lst_size(stack_a) / 2;
	tag = 1;
	while (lst_size(stack_a) > 3)
	{
		max = max_finder(stack_a, tag);
		if (max->index <= median)
			rotater(stack_a, max->index, 'r');
		else
			rotater(stack_a, max->index, 'R');
		ft_push(stack_a, stack_b, 'b');
		tag++;
	}
	if (lst_size(stack_a) == 3)
		ft_three(stack_a, a_size);
	else if (lst_size(stack_a) == 2)
		ft_two(stack_a);
	while (*stack_b)
		ft_push(stack_a, stack_b, 'a');
}
