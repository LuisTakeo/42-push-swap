/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:36 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/06 14:42:36 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker_bonus.h"

void	ft_put_order(t_db_list **lst)
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
		if (!temp->pos)
			temp->pos = 1;
		if (!next->pos)
			next->pos = 1;
		if (temp->val > next->val)
			temp->pos += 1;
		if (next->val > temp->val)
			next->pos += 1;
		next = next->next;
		if (!next && temp->next)
		{
			temp = temp->next;
			next = temp->next;
		}
	}
}
