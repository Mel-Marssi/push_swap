/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:55:55 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/21 18:43:36 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_stack **a)
{
	while (ft_if_stack_sort(*a) == 1)
	{
		if (find_max (*a) == (*a)->num)
			ra(a);
		if (find_min(*a) == (*a)->next->num)
			sa(*a);
		if (find_max(*a) == (*a)->next->num)
			rra(a);
	}
}

void	ft_sort5(t_stack **a, t_stack **b)
{
	int	index;
	int	min;

	while (ft_lstsize(*a) > 3)
	{
		min = find_min(*a);
		index = find_index(*a, find_min(*a));
		if (index == 0)
			pb(a, b);
		else if (min != (*a)->num && index >= 2)
			rra(a);
		else if (min != (*a)->num && index < 2)
			(sa(*a), pb(a, b));
	}
	ft_sort3(a);
	while (*b)
		pa(a, b);
}

int	find_max(t_stack *b)
{
	int	tmp;

	tmp = b->num;
	while (b)
	{
		if (tmp < b->num)
			tmp = b->num;
		b = b->next;
	}
	return (tmp);
}

int	find_min(t_stack *b)
{
	int	tmp;

	tmp = b->num;
	while (b)
	{
		if (tmp > b->num)
			tmp = b->num;
		b = b->next;
	}
	return (tmp);
}

int	if_exist(t_stack *a, int tab)
{
	while (a)
	{
		if (tab == a->num)
			return (0);
		a = a->next;
	}
	return (1);
}
