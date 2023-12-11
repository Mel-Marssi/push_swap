/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initia.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:59:45 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/21 17:52:17 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initi(t_work *m, int size)
{
	m->mid = size / 2;
	if (size <= 250)
		m->offset = size / 8;
	else
		m->offset = size / 18;
	m->start = m->mid - m->offset;
	m->end = m->mid + m->offset;
	m->i = 0;
	m->count = 0;
	m->size = size;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	*tab_stack(t_stack *a)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(a);
	tab = ft_calloc(size, sizeof(int));
	while (a != NULL)
	{
		tab[i] = a->num;
		i++;
		a = a->next;
	}
	sort_int_tab(tab, size);
	return (tab);
}

int	ft_exist(t_stack *a, int *tab, t_work n)
{
	while (a)
	{
		if (tab[n.start] <= a->num && a->num <= tab[n.end])
			return (1);
		a = a->next;
	}
	return (0);
}

int	ft_if_stack_sort(t_stack *a)
{
	int	i;

	i = 0;
	while (a->next != NULL)
	{
		if (a->num > a->next->num)
			return (1);
		a = a->next;
	}
	return (0);
}
