/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:11:25 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/04 20:16:19 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_stack **root)
{
	t_stack	*tmp;

	tmp = *root;
	if (tmp->tag == 1 && tmp->next->tag == 3)
	{
		ft_swap(root, 'a');
		ft_rotate(root, 'a');
	}
	else if (tmp->tag == 2 && tmp->next->tag == 1)
		ft_swap(root, 'a');
	else if (tmp->tag == 2 && tmp->next->tag == 3)
		ft_r_rotate(root, 'a');
	else if (tmp->tag == 3 && tmp->next->tag == 1)
		ft_rotate(root, 'a');
	else if (tmp->tag == 3 && tmp->next->tag == 2)
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
