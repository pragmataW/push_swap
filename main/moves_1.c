/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:06:01 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/05 08:19:07 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **root, char opt)
{
	t_stack	*tmp;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	tmp = (*root)->next;
	(*root)->next = tmp->next;
	tmp->next = *root;
	*root = tmp;
	if (opt == 'a')
		ft_printf("sa\n");
	else if (opt == 'b')
		ft_printf("sb\n");
	index_finder(root);
}

void	ft_ss(t_stack **root_a, t_stack **root_b)
{
	if (*root_a != NULL && (*root_a)->next != NULL)
		ft_swap(root_a, '0');
	if (*root_b != NULL && (*root_b)->next != NULL)
		ft_swap(root_b, '0');
	ft_printf("ss\n");
	index_finder(root_a);
	index_finder(root_b);
}

void	ft_push(t_stack **a, t_stack **b, char opt)
{
	t_stack	*push_val;

	push_val = NULL;
	if (opt == 'a')
	{
		push_val = ft_stack_new((*b)->num, (*b)->tag, (*b)->index);
		ft_stack_push(a, push_val);
		ft_stack_pop(b);
		ft_printf("pa\n");
	}
	else if (opt == 'b')
	{
		push_val = ft_stack_new((*a)->num, (*a)->tag, (*a)->index);
		ft_stack_push(b, push_val);
		ft_stack_pop(a);
		ft_printf("pb\n");
	}
	index_finder(a);
	index_finder(b);
}

void	ft_rotate(t_stack **root, char opt)
{
	t_stack	*rt_val;
	t_stack	*tmp;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	tmp = (*root)->next;
	rt_val = ft_stack_new((*root)->num, (*root)->tag, (*root)->index);
	ft_stack_pop(root);
	*root = tmp;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = rt_val;
	if (opt == 'a')
		ft_printf("ra\n");
	else if (opt == 'b')
		ft_printf("rb\n");
	index_finder(root);
}

void	ft_rr(t_stack **root_a, t_stack **root_b)
{
	if (*root_a != NULL && (*root_a)->next != NULL)
		ft_rotate(root_a, '0');
	if (*root_b != NULL && (*root_b)->next != NULL)
		ft_rotate(root_b, '0');
	ft_printf("rr\n");
	index_finder(root_a);
	index_finder(root_b);
}
