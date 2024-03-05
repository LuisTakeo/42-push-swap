/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:03:37 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/05 18:03:37 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	reverse_rotate(t_db_list **lst)
{
	t_db_list	*temp;
	t_db_list	*prev;

	if (!lst || !(*lst))
		return ;
	temp = ft_dblstlast(*lst);
	prev = temp->prev;
	if (!prev)
		return ;
	ft_dblstadd_front(lst, temp);
	prev->next = NULL;
	temp->prev = NULL;
}
