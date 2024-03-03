/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:50:21 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/02 17:50:21 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_dblstadd_front(t_db_list **lst, t_db_list *new)
{
	t_db_list	*temp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_dblstfirst(*lst);
	temp->prev = new;
	new->next = temp;
	*lst = new;
}
