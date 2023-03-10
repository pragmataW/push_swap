/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:01:44 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/01 23:55:03 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_stack_push(t_stack **root, t_stack *new)
{
	if (!new)
		return ;
	if (*root != NULL)
		new->next = *root;
	*root = new;
}
