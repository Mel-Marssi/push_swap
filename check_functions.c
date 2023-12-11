/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:20:23 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:07:10 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *head)
{
	t_stack	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	av_isdigit(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] && ft_isdigit(av[i][j], j) == 0)
				(write(2, "Error\n", 6), exit(-1));
			j++;
			if (ft_isdigit(av[i][j - 1], j - 1) == 3 && av[i][j] == '\0')
				(write(2, "Error\n", 6), exit(-1));
		}
		i++;
	}
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
