/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:06:01 by yciftci           #+#    #+#             */
/*   Updated: 2023/02/24 09:31:59 by yciftci          ###   ########.fr       */
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
}

void	ft_ss(t_stack **root_a, t_stack **root_b)
{
	if (*root_a != NULL && (*root_a)->next != NULL)
		ft_swap(root_a, '0');
	if (*root_b != NULL && (*root_b)->next != NULL)
		ft_swap(root_b, '0');
	ft_printf("ss\n");
}

void	ft_push(t_stack **root_a, t_stack **root_b, char opt)
{
	t_stack	*push_val;

	if (opt == 'a')
	{
		push_val = ft_stack_new((*root_b)->num);
		ft_stack_push(root_a, push_val);
		ft_stack_pop(root_b);
		ft_printf("pa\n");
	}
	else if (opt == 'b')
	{
		push_val = ft_stack_new((*root_a)->num);
		ft_stack_push(root_b, push_val);
		ft_stack_pop(root_a);
		ft_printf("pb\n");
	}
}

void	ft_rotate(t_stack **root, char opt)
{
	t_stack	*rt_val;
	t_stack	*tmp;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	tmp = (*root)->next;
	rt_val = ft_stack_new((*root)->num);
	ft_stack_pop(root);
	*root = tmp;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = rt_val;
	if (opt == 'a')
		ft_printf("ra\n");
	else if (opt == 'b')
		ft_printf("rb\n");
}

void	ft_rr(t_stack **root_a, t_stack **root_b)
{
	if (*root_a != NULL && (*root_a)->next != NULL)
		ft_rotate(root_a, '0');
	if (*root_b != NULL && (*root_b)->next != NULL)
		ft_rotate(root_b, '0');
	ft_printf("rr\n");
}
