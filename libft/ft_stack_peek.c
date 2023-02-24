/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:16:27 by yciftci           #+#    #+#             */
/*   Updated: 2023/02/23 21:10:04 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_stack_peek(t_stack **root)
{
	t_stack	*r_val;

	if (*root == NULL)
	{
		ft_printf("Stack is empty!");
		return (NULL);
	}
	r_val = (t_stack *)malloc(sizeof(t_stack));
	r_val->num = (*root)->num;
	r_val->tag = (*root)->tag;
	r_val->next = (*root)->next;
	return (r_val);
}
