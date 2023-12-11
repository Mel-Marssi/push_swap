/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mars < mel-mars@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:09:41 by mel-mars          #+#    #+#             */
/*   Updated: 2023/01/16 17:57:36 by mel-mars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
