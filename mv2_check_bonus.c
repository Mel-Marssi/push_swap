/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv2_check_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:41:18 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/16 14:58:53 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
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
}

void	sa(t_stack *a)
{
	int		tmp;

	if (ft_lstsize(a) <= 1)
		return ;
	tmp = a->num;
	a->num = a->next->num;
	a->next->num = tmp;
}

void	sb(t_stack *b)
{
	int		tmp;

	if (ft_lstsize(b) <= 1)
		return ;
	tmp = b->num;
	b->num = b->next->num;
	b->next->num = tmp;
}
