/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:46 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/04 15:20:34 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last(t_stack **root)
{
	int		max;
	t_stack	*iterator;
	t_stack	*tmp;

	iterator = *root;
	tmp = *root;
	max = iterator->num;
	while (iterator)
	{
		if (iterator->num > max)
		{
			tmp = iterator;
			max = tmp->num;
		}
		iterator = iterator->next;
	}
	return (tmp);
}

void	tag_finder(t_stack **root, int argc)
{	
	t_stack	*min;
	t_stack	*max;
	t_stack	*iter;
	int		tag;

	tag = 1;
	while (argc > 1)
	{
		iter = *root;
		max = find_last(root);
		while (iter)
		{
			if (iter->num < max->num && iter->tag == 0)
				max = iter;
			iter = iter->next;
		}
		max->tag = tag;
		tag++;
		argc--;
	}
}

int main()
{
	t_stack *new = NULL;
	ft_stack_push(&new, ft_stack_new(41));
	ft_stack_push(&new, ft_stack_new(361));
	ft_stack_push(&new, ft_stack_new(9));
	ft_stack_push(&new, ft_stack_new(99));
	ft_stack_push(&new, ft_stack_new(88));
	ft_stack_push(&new, ft_stack_new(2));

	//!
	tag_finder(&new, 7);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->tag, ft_stack_peek(&new)->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->tag, ft_stack_peek(&new)->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->tag, ft_stack_peek(&new)->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->tag, ft_stack_peek(&new)->next->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->next->tag, ft_stack_peek(&new)->next->next->next->next->num);
	ft_printf("tag: %d num %d\n", ft_stack_peek(&new)->next->next->next->next->next->tag, ft_stack_peek(&new)->next->next->next->next->next->num);
}
