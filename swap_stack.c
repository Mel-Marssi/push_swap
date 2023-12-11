/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:05:12 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/17 16:52:23 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int		tmp;

	tmp = a->num;
	a->num = a->next->num;
	a->next->num = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int		tmp;

	tmp = b->num;
	b->num = b->next->num;
	b->next->num = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sa(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}

void	if_its_sort(t_stack *a)
{
	while (a)
	{
		if (a->next != NULL && a->num > a->next->num)
			return ;
		a = a->next;
	}
	exit (-1);
}
