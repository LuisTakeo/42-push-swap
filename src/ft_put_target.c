/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 19:16:30 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_put_target(t_stack *stacks)
{
	t_db_list	*temp_b;
	t_db_list	*temp_a;
	int			cost_b;

	cost_b = 0;
	temp_b = stacks->stack_b;
	while (temp_b)
	{
		temp_a = stacks->stack_a;
		while (temp_a)
		{
			if (temp_a->pos > temp_b->pos && (temp_b->target < temp_b->pos
					|| temp_a->pos < temp_b->target))
				temp_b->target = temp_a->pos;
			temp_a = temp_a->next;
		}
		if (temp_b->target < temp_b->pos)
			temp_b->target = stacks->min_pos_a;
		temp_b->cost = cost_b; // TODO calcular custos
		cost_b++;
		temp_b = temp_b->next;
	}
	temp_b = stacks->stack_b;
	while (temp_b)
	{
		ft_printf("Values: pos %d target %d\n", temp_b->pos, temp_b->target);
		temp_b = temp_b->next;
	}
}
