/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:22:53 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/17 14:02:33 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <stdint.h>
# include "libft/libft.h"

void	check_repeat(char **av);
void	av_isdigit(char **av);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrr(t_stack **a, t_stack **b);
void	rrb(t_stack **b);
void	pa(t_stack	**b, t_stack **a);
void	pb(t_stack	**b, t_stack **a);
t_stack	*fill_stack(char **av);
void	free_stack(t_stack *head);
void	ft_free_split(char **split);
void	its_sort(t_stack *a);
void	check_duplicate(t_stack *a);
#endif