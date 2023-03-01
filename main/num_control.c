/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:38:53 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/01 19:47:44 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(char **nums)
{
	int	i;
	int	j;
	int	control;
	control = 0;
	i = 0;
	while (nums[i])
	{
		j = i + 1;
		while (nums[j])
		{
			control = ft_strcmp(nums[i], nums[j]);
			if (control == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_number(char **nums)
{
	int	i;
	int	j;

	i = 1;
	while (nums[i])
	{
		j = 0;
		while (nums[i][j])
		{
			if (nums[i][j] < '0' || nums[i][j] > '9')
			{
				if (j == 0 && (nums[i][j] == '-' || nums[i][j] == '+'))
				{
					j++;
					continue ;
				}
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	num_control(char **nums)
{
	if (!is_duplicate(nums))
		exit(ft_printf("Error!\nDuplicated Numbers"));
	if (!is_number(nums))
		exit(ft_printf("Error!\nYour arguments are not number!"));
}
