/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 21:16:46 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/02 21:16:46 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_push(t_db_list **lst_i, t_db_list **lst_j)
{
	t_db_list	*temp;

	if (!lst_i || !(*lst_i))
		return ;
	temp = ft_dblstfirst(*lst_i);
	*lst_i = (*lst_i)->next;
	if (*lst_i)
		(*lst_i)->prev = NULL;
	temp->next = NULL;
	ft_dblstadd_front(lst_j, temp);
}