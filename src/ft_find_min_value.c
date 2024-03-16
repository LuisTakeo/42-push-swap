/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:49:06 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 19:49:06 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	ft_find_min_value(t_db_list *lst)
{
	t_db_list	*temp;
	int			min;

	temp = lst;
	min = lst->pos;
	while (temp)
	{
		if (temp->pos < min)
			min = temp->pos;
		temp = temp->next;
	}
	return (min);
}