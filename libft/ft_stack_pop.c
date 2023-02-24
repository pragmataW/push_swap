/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:48:33 by yciftci           #+#    #+#             */
/*   Updated: 2023/02/23 20:28:20 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_stack_pop(t_stack **root)
{
	t_stack	*tmp;

	if (*root == NULL)
	{
		ft_printf("stack is empty!\n");
		return (0);
	}
	tmp = *root;
	*root = (*root)->next;
	free(tmp);
	return (1);
}

// int main()
// {
// 	t_stack *new = NULL;
// 	ft_stack_push(&new, ft_stack_new(41,241));
// 	ft_stack_push(&new, ft_stack_new(361,221));
// 	ft_stack_push(&new, ft_stack_new(9,11));
// 	ft_stack_push(&new, ft_stack_new(2,11));
// 	ft_stack_push(&new, ft_stack_new(88,11));
// 	ft_stack_push(&new, ft_stack_new(99,11));

// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// 	ft_printf("%s\n", ft_stack_pop(&new));

// 	ft_stack_push(&new, ft_stack_new(99,11));
// 	ft_printf("%d\n", ft_stack_pop(&new)->x);
// }
