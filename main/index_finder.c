/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_finder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:25:39 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/02 16:12:14 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_finder(t_stack **root)
{
	int			i;
	t_stack		*tmp;

	i = 0;
	tmp = *root;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}
