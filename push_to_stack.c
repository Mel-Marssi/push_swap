/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:17:27 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:05:42 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_printf("pa\n");
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
	ft_printf("pb\n");
}

void	ft_check_all(char **av)
{
	int		i;
	char	*str;
	char	**split;

	i = 2;
	str = ft_strdup(av[1]);
	while (av[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	split = ft_split(str, ' ');
	av_isdigit(split);
	free(str);
	ft_free_split(split);
}

void	check_duplicate(t_stack *a)
{
	int		tmp;
	t_stack	*hold;

	while (a)
	{
		tmp = a->num;
		hold = a->next;
		while (hold)
		{
			if (tmp == hold->num)
				(write(2, "Error\n", 6), exit(-1));
			hold = hold->next;
		}
		a = a->next;
	}
}

t_stack	*fill_stack(char **av)
{
	int		i;
	int		j;
	t_stack	*stack;
	char	**split;

	i = 1;
	ft_check_all(av);
	while (av[i])
	{	
		split = ft_split(av[i], ' ');
		if (split[0] == NULL)
			(write(2, "Error\n", 6), exit(-1));
		j = 0;
		if (i == 1)
			stack = ft_lstnew(ft_atoi(split[j++]));
		while (split[j])
			(ft_lstadd_back(&stack, ft_lstnew(ft_atoi(split[j]))), j++);
		ft_free_split(split);
		i++;
	}
	(check_duplicate(stack), if_its_sort(stack));
	return (stack);
}
