/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workshop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:44:20 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:05:05 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	b = NULL;
	if (ac <= 1)
		exit(1);
	is_empty(av);
	a = fill_stack(av);
	ft_sort(&a, &b);
	free_stack(a);
	return (0);
}
