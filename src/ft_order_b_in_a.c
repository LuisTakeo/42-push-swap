/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_b_in_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:05:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 19:05:30 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_order_b_in_a(t_stack *stacks)
{
	t_db_list	*temp;
	while (stacks->stack_b)
	{
		stacks->min_pos_a = ft_find_min_value(stacks->stack_a);
		ft_put_target(stacks);
		ft_movement_in_b(stacks);
		ft_movement_in_a(stacks);
		ft_push(&stacks->stack_b, &stacks->stack_a);
		ft_print_movement(stacks, "pb");
	}
	temp = stacks->stack_a;
	while (temp)
	{
		ft_printf("Values: %d\n", temp->pos);
		temp = temp->next;
	}

}