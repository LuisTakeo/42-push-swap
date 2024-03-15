/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ordered.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:09:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 17:09:30 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	ft_is_ordered(t_db_list	*lst)
{
	int			i;
	t_db_list	*temp;

	i = 1;
	temp = lst;
	while (temp)
	{
		if (temp->pos != i)
			return (0);
		temp = temp->next;
		i++;
	}
	return (1);
}