/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:43:13 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/05 01:12:56 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*min_finder(t_stack **root, int tag)
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
		while (loop > 0)
		{
			ft_rotate(root, 'a');
			loop--;
		}
	}
	else if (opt == 'R')
	{
		while (reverse_loop > 0)
		{
			ft_r_rotate(root, 'a');
			reverse_loop--;
		}
	}
	if ((*root)->tag - 1 == (*root)->next->tag)
		ft_swap(root, 'a');
}

void	push_swap_sort(t_stack **stack_a, t_stack **stack_b, int argc)
{
	int		median;
	int		tag;
	t_stack	*min;

	median = lst_size(stack_a) / 2;
	tag = 1;
	while (argc > 4)
	{
		min = min_finder(stack_a, tag);
		if (min->index <= median)
			rotater(stack_a, min->index, 'r');
		else
			rotater(stack_a, min->index, 'R');
		ft_push(stack_a, stack_b, 'b');
		tag++;
		argc--;
	}
	ft_three(stack_a);
}
