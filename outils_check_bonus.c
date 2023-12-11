/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils_check_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:43:03 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:06:24 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sa(b);
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
			(ft_free_split(split), (write(2, "Error\n", 6), exit(-1)));
		j = 0;
		if (i == 1)
			stack = ft_lstnew(ft_atoi(split[j++]));
		while (split[j])
			(ft_lstadd_back(&stack, ft_lstnew(ft_atoi(split[j]))), j++);
		ft_free_split(split);
		i++;
	}
	check_duplicate(stack);
	return (stack);
}
