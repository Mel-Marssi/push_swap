/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:11:01 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/15 17:12:31 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*plt;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		plt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = plt;
	}
}
