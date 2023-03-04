/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:50:15 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/05 01:07:04 by yciftci          ###   ########.fr       */
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
	ft_stack_push(&a, ft_stack_new(1, 0, 0));
	ft_stack_push(&a, ft_stack_new(8, 0, 0));
	ft_stack_push(&a, ft_stack_new(41, 0, 0));
	ft_stack_push(&a, ft_stack_new(3, 0, 0));

	//if (argc < 2)
	//	exit(ft_printf("Error\ntoo few arguments!"));
	//num_control(argv);
	//init(&a, argv);
	tag_finder(&a, 6);
	index_finder(&a);
	push_swap_sort(&a, &b, 6);
}
