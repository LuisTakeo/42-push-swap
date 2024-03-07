/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_duplicate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:34:57 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 16:34:57 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	ft_verify_duplicate(t_db_list **lst)
{
	t_db_list	*temp;
	t_db_list	*next;
	int			i;

	i = 1;
	temp = *lst;
	temp->pos = i;
	next = temp->next;
	while (temp->next)
	{
		if (temp->val == next->val)
			return (1);
		next = next->next;
		if (!next && temp->next)
		{
			temp = temp->next;
			next = temp->next;
		}
	}
	return (0);
}
