/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:55:42 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:06:54 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_moves(char *move, t_stack **a, t_stack **b)
{
	if (ft_strcmp(move, "sa\n") == 0)
		(sa(*a));
	else if (ft_strcmp(move, "sb\n") == 0)
		sb(*b);
	else if (ft_strcmp(move, "ss\n") == 0)
		ss(*a, *b);
	else if (ft_strcmp(move, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(move, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(move, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(move, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(move, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(move, "rrr\n") == 0)
		rrr(a, b);
	else if (ft_strcmp(move, "pb\n") == 0)
		pb(a, b);
	else if (ft_strcmp(move, "pa\n") == 0)
		pa(a, b);
	else
		(write(2, "Error\n", 6), exit(-1));
}

void	its_sort(t_stack *a)
{
	while (a)
	{
		if (a->next != NULL && a->num > a->next->num)
		{
			ft_printf("KO\n");
			return ;
		}
		a = a->next;
	}
	ft_printf("OK\n");
	return ;
}

void	ft_print_stack(t_stack *a)
{
	while (a != NULL)
	{
		ft_printf("%i \t", a->num);
		a = a->next;
	}
	ft_putchar('\n');
}

void	is_empty(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_strcmp(av[i], "") == 0)
			(write(2, "Error\n", 6), exit(-1));
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*moves;

	if (ac <= 1)
		exit(-1);
	is_empty(av);
	a = fill_stack(av);
	moves = get_next_line(0);
	while (moves)
	{
		ft_moves(moves, &a, &b);
		free(moves);
		moves = get_next_line(0);
	}
	if (a == NULL || b != NULL)
		(ft_printf("KO\n"), exit(0));
	its_sort(a);
	free_stack(a);
}
