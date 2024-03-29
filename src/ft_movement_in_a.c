/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement_in_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:08:34 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/16 20:08:34 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	ft_rotate_to_top_a(t_stack *stacks, t_db_list *target)
{
	while (stacks->stack_a->pos != target->target)
	{
		ft_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "ra");
	}
}

static void	ft_reverse_to_top_a(t_stack *stacks, t_db_list *target)
{
	while (stacks->stack_a->pos != target->target)
	{
		ft_reverse_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "rra");
	}
}

void	ft_movement_in_a(t_stack *stacks)
{
	if (stacks->pos_a > (stacks->size_a / 2))
		ft_reverse_to_top_a(stacks, stacks->stack_b);
	else if (stacks->pos_a > 0)
		ft_rotate_to_top_a(stacks, stacks->stack_b);
}
