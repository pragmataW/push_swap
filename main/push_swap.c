/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:50:15 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/19 06:11:43 by yciftci          ###   ########.fr       */
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
	if (argc < 2)
		exit(ft_printf("Error\ntoo few arguments!"));
	num_control(argv);
	init(&a, argv);
	tag_finder(&a, argc);
	index_finder(&a);
	if (argc < 80)
		push_swap_sort(&a, &b);
	else
		radix(&a, &b);
}
