/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement_in_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:08:21 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/16 20:08:21 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	ft_rotate_to_top(t_stack *stacks, int target)
{
	while (stacks->stack_b->pos != target)
	{
		ft_rotate(&stacks->stack_b);
		ft_print_movement(stacks, "rb");
	}
}

static void	ft_reverse_to_top(t_stack *stacks, int target)
{
	while (stacks->stack_b->pos != target)
	{
		ft_reverse_rotate(&stacks->stack_b);
		ft_print_movement(stacks, "rrb");
	}
}

void	ft_movement_in_b(t_stack *stacks)
{
	if (stacks->pos_b > (stacks->size_b / 2))
		ft_reverse_to_top(stacks, stacks->target_b);
	else if (stacks->pos_b > 0)
		ft_rotate_to_top(stacks, stacks->target_b);
}
