/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:38:53 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/04 16:28:42 by yciftci          ###   ########.fr       */
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

int	is_larger(const char *str)
{
	int				i;
	int				sign;
	long			result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while ((ft_isdigit(str[i]) == 1) && (str[i] != '\0'))
		result = result * 10 + (str[i++] - 48);
	if (result > 2147483647 || result < -2147483648)
		return (0);
	return (1);
}

void	num_control(char **nums)
{
	int	i;

	i = 1;
	if (!is_duplicate(nums))
		exit(ft_printf("Error!\nDuplicated Numbers!"));
	if (!is_number(nums))
		exit(ft_printf("Error!\nYour arguments are not number!"));
	while (nums[i])
	{
		if (!is_larger(nums[i]))
			exit(ft_printf("Error\nYour arguments are larger than integer!"));
		i++;
	}
}
