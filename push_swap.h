/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:41:34 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/19 21:37:41 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <stdint.h>
# include "libft_push_swap/libft.h"

typedef struct tab_work
{
	int	start;
	int	end;
	int	offset;
	int	mid;
	int	i;
	int	count;
	int	size;
}		t_work;
void	ft_print_stack(t_stack *a);
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
void	ft_sort3(t_stack **a);
void	ft_sort5(t_stack **a, t_stack **b);
int		ft_exist(t_stack *a, int *tab, t_work n);
void	ft_help_sort100(t_stack **a, t_stack **b, t_work n, int *tab);
int		if_exist(t_stack *a, int tab);
void	norm_sort100(t_stack **a, t_stack **b, t_work n, int *tab);
int		find_index(t_stack *a, int tab);
void	sort_int_tab(int *tab, unsigned int size);
int		*tab_stack(t_stack *a);
void	ft_initi(t_work *m, int size);
int		*tab_stack(t_stack *a);
void	ft_sort(t_stack **a, t_stack **b);
int		find_max(t_stack *b);
int		find_min(t_stack *b);
int		ft_if_stack_sort(t_stack *a);
void	if_its_sort(t_stack *a);

#endif