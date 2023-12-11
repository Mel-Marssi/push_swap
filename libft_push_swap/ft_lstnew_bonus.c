/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:08:37 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/15 17:12:41 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int num)
{
	t_stack	*n_node;

	n_node = malloc(sizeof(t_stack));
	if (n_node == 0)
		return (0);
	n_node->num = num;
	n_node->next = 0;
	return (n_node);
}
