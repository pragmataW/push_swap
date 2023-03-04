/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yciftci <yciftci@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:01:55 by yciftci           #+#    #+#             */
/*   Updated: 2023/03/04 21:37:04 by yciftci          ###   ########.fr       */
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
//! Index Finder
void	index_finder(t_stack **root);
//! Tag Finder
t_stack	*find_last(t_stack **root);
void	tag_finder(t_stack **root, int argc);
//! Push Swap Sort Utils
void	ft_three(t_stack **root);
void	ft_two(t_stack **root);
int		is_sorted(t_stack **root);
#endif