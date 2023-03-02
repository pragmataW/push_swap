/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:46 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/02 17:10:25 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tag_finder(t_stack **root, int argc)
{
	int		tag; //zaten biliyon amk
	int		last; //bir önceki en küçük node
	t_stack	*iter;
	t_stack *tmp;

	tmp = *root;
	iter = *root;
	tag = 1;
	last = -2147483647;
	while (argc > 1)
	{
		iter = *root;
		while (iter)
		{
			if ((tmp->num > iter->num) && last < iter->num )
			{
				tmp = iter;
			}
			iter = iter->next;
		}
		last = tmp->num;
		tmp->tag = tag;
		argc--;
		tag++;
	}
}

int main()
{
	t_stack *new = NULL;
	ft_stack_push(&new, ft_stack_new(41));
	ft_stack_push(&new, ft_stack_new(361));
	ft_stack_push(&new, ft_stack_new(9));
	ft_stack_push(&new, ft_stack_new(2));
	ft_stack_push(&new, ft_stack_new(88));
	ft_stack_push(&new, ft_stack_new(99));

	//!
	tag_finder(&new, 7);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->tag, ft_stack_peek(&new)->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->tag, ft_stack_peek(&new)->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->tag, ft_stack_peek(&new)->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->tag, ft_stack_peek(&new)->next->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->next->tag, ft_stack_peek(&new)->next->next->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->next->next->tag, ft_stack_peek(&new)->next->next->next->next->next->num);
}
