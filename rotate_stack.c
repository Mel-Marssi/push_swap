/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:45:50 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/15 13:21:31 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*hold;

	if (ft_lstsize(*a) <= 1)
		return ;
	tmp = (*a);
	*a = (*a)->next;
	hold = ft_lstlast(*a);
	hold->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*hold;

	if (ft_lstsize(*b) <= 1)
		return ;
	tmp = (*b);
	*b = (*b)->next;
	hold = ft_lstlast(*b);
	hold->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rb(b);
	ra(a);
}

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*hold;

	if (ft_lstsize(*a) <= 1)
		return ;
	tmp = (*a);
	hold = (*a);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	hold = tmp->next;
	hold->next = (*a);
	tmp->next = NULL;
	(*a) = hold;
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*hold;

	if (ft_lstsize(*b) <= 1)
		return ;
	tmp = (*b);
	hold = (*b);
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	hold = tmp->next;
	hold->next = (*b);
	tmp->next = NULL;
	(*b) = hold;
	ft_printf("rrb\n");
}
