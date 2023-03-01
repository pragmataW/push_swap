/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:01:55 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/01 19:53:49 by yciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

//! Moves
void	ft_swap(t_stack **root, char opt);
void	ft_ss(t_stack **root_a, t_stack **root_b);
void	ft_push(t_stack **root_a, t_stack **root_b, char opt);
void	ft_rotate(t_stack **root, char opt);
void	ft_rr(t_stack **root_a, t_stack **root_b);
void	ft_r_rotate(t_stack **root, char opt);
void	ft_rrr(t_stack **root_a, t_stack **root_b);
//! Controls
int		is_duplicate(char **nums);
int		is_number(char **nums);
void	num_control(char **nums);

#endif