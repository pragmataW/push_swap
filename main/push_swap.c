/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:50:15 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/17 10:06:22 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack **stack, char **args)
{
	int		i;

	i = 1;
	while (args[i])
	{
		ft_stack_push(stack, ft_stack_new(ft_atoi(args[i]), 0, 0));
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;

	ft_stack_push(&a, ft_stack_new(31, 0, 0));
	ft_stack_push(&a, ft_stack_new(22, 0, 0));
	ft_stack_push(&a, ft_stack_new(3, 0, 0));
	ft_stack_push(&a, ft_stack_new(42, 0, 0));
	ft_stack_push(&a, ft_stack_new(5, 0, 0));
	ft_stack_push(&a, ft_stack_new(64, 0, 0));
	ft_stack_push(&a, ft_stack_new(71, 0, 0));
	ft_stack_push(&a, ft_stack_new(8, 0, 0));
	ft_stack_push(&a, ft_stack_new(944, 0, 0));
	//if (argc < 2)
	//	exit(ft_printf("Error\ntoo few arguments!"));
	//num_control(argv);
	//init(&a, argv);
	tag_finder(&a, 10);
	index_finder(&a);
	push_to_b(&a, &b, 10);
	push_swap_sort(&a, &b);

	t_stack *index = b;
	while (index)
	{
		ft_printf("%d\n", ft_stack_peek(&index)->tag);
		index = index->next;
	}
	ft_printf("--------------");
	index = a;
	while (index)
	{
		ft_printf("%d\n", ft_stack_peek(&index)->tag);
		index = index->next;
	}
}

//tek sayı verirsen patlıyor
