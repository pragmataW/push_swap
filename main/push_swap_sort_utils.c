/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:11:25 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/19 06:36:35 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_stack **root, int argc)
{
	t_stack	*tmp;

	tmp = *root;
	if (tmp->tag == argc - 2 && tmp->next->tag == argc)
	{
		ft_swap(root, 'a');
		ft_rotate(root, 'a');
	}
	else if (tmp->tag == argc - 1 && tmp->next->tag == argc - 2)
		ft_swap(root, 'a');
	else if (tmp->tag == argc - 1 && tmp->next->tag == argc)
		ft_r_rotate(root, 'a');
	else if (tmp->tag == argc && tmp->next->tag == argc - 2)
		ft_rotate(root, 'a');
	else if (tmp->tag == argc && tmp->next->tag == argc - 1)
	{
		ft_rotate(root, 'a');
		ft_swap(root, 'a');
	}
}

void	ft_two(t_stack **root)
{
	if ((*root)->tag > (*root)->next->tag)
		ft_swap(root, 'a');
}

int	is_sorted(t_stack **root)
{
	int		i;
	t_stack	*iter;

	i = 1;
	iter = *root;
	while (iter)
	{
		if (iter->tag != i)
			return (0);
		iter = iter->next;
		i++;
	}
	return (1);
}

int	lst_size(t_stack **root)
{
	int		i;
	t_stack	*iter;

	i = 0;
	iter = *root;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}
