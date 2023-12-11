/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:49:07 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/21 18:38:20 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_stack *a, int tab)
{
	int	i;

	i = 0;
	while (a != NULL && tab != a->num)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	find_index_tab(t_stack *a, int *tab, t_work n)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->num >= tab[n.start] && a->num <= tab[n.end])
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

void	ft_help_sort100(t_stack **a, t_stack **b, t_work n, int *tab)
{
	while (*a)
	{
		if (ft_exist(*a, tab, n) == 1)
		{
			while (!((*a)->num >= tab[n.start] && (*a)->num <= tab[n.end])
				&& find_index_tab(*a, tab, n) <= ft_lstsize(*a) / 2)
				ra(a);
			while (!((*a)->num >= tab[n.start] && (*a)->num <= tab[n.end])
				&& find_index_tab(*a, tab, n) > ft_lstsize(*a) / 2)
				rra(a);
			pb(a, b);
			if ((*b)->num < tab[n.mid])
				rb(b);
		}
		else
		{
			n.start -= n.offset;
			n.end += n.offset;
			if (n.start < 0)
				n.start = 0;
			if (n.end > n.size - 1)
				n.end = n.size - 1;
		}
	}
}

void	norm_sort100(t_stack **a, t_stack **b, t_work n, int *tab)
{	
	while (*b)
	{
		if (n.count == 0 || (*b)->num > ft_lstlast(*a)->num)
			(pa(a, b), ra(a), n.count++);
		if (n.count != 0 && if_exist(*b, tab[n.size]) == 1)
			(rra(a), n.count--, n.size--);
		else if (tab[n.size] != (*b)->num && if_exist(*b, tab[n.size]) == 0)
		{
			if (find_index(*b, tab[n.size]) < ft_lstsize(*b) / 2)
				rb(b);
			else
				rrb(b);
		}
		while ((*b) && tab[n.size] == (*b)->num)
			(pa(a, b), n.size--);
	}
	while (n.count != 0)
		(rra(a), n.count--);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	t_work		n;
	int			*tab;

	ft_initi(&n, ft_lstsize(*a));
	tab = tab_stack(*a);
	if (n.size <= 2)
	{
		if ((*a)->num > (*a)->next->num)
			sa(*a);
	}
	else if (n .size <= 3)
		ft_sort3(a);
	else if (n.size < 8)
		ft_sort5(a, b);
	else
	{
		ft_help_sort100(a, b, n, tab);
		n.size--;
		norm_sort100(a, b, n, tab);
	}
	free(tab);
}
