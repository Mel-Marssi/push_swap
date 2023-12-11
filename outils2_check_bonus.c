/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils2_check_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:46:46 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/26 14:05:52 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
