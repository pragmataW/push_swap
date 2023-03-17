/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:43:13 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/17 01:10:52 by yciftci          ###   ########.fr       */
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

void	push_swap_sort(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int		median;
	int		tag;
	int		argc_tmp;
	t_stack	*min;

	median = lst_size(stack_a) / 2;
	argc_tmp = argc;
	tag = lst_size(stack_a);
	while (argc > 3)
	{
		min = max_finder(stack_a, tag);
		if (min->index <= median)
			rotater(stack_a, min->index, 'r');
		else
			rotater(stack_a, min->index, 'R');
		ft_push(stack_a, stack_b, 'b');
		tag--;
		argc--;
	}
	ft_three(stack_a, argc_tmp);
	while (*stack_b)
		ft_push(stack_a, stack_b, 'a');
}
