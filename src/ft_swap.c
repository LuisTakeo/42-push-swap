/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:13:42 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/05 21:13:42 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	swap(t_db_list **lst)
{
	t_db_list	*temp;
	t_db_list	*n;

	if (!lst || !(*lst))
		return ;
	temp = *lst;
	n = temp->next;
	if (!n)
		return ;
	temp->next = n->next;
	temp->prev = n;
	n->next = temp;
	n->prev = NULL;
	*lst = n;
	if (temp->next)
		temp->next->prev = temp;
}
