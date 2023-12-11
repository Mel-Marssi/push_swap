/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_checker_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:21:42 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/16 14:59:01 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_stack	**b, t_stack **a)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	else
	{
		tmp = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = tmp;
	}
}

void	pb(t_stack	**b, t_stack **a)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	else
	{
		tmp = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = tmp;
	}
}

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
}

void	rr(t_stack **a, t_stack **b)
{
	rb(b);
	ra(a);
}
