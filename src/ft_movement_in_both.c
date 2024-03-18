/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement_in_both.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:03:49 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/18 17:03:49 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	ft_rotate_both(t_stack *stacks)
{
	while (stacks->stack_b->pos != stacks->target_b
		&& stacks->stack_a->pos != stacks->target_a)
	{
		ft_rotate(&stacks->stack_b);
		ft_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "rr");
	}
}

static void	ft_reverse_both(t_stack *stacks)
{
	while (stacks->stack_b->pos != stacks->target_b
		&& stacks->stack_a->pos != stacks->target_a)
	{
		ft_reverse_rotate(&stacks->stack_a);
		ft_reverse_rotate(&stacks->stack_b);
		ft_print_movement(stacks, "rrr");
	}
}

void	ft_movement_in_both(t_stack *stacks)
{
	int	half_a;
	int	half_b;

	half_a = stacks->size_a / 2;
	half_b = stacks->size_b / 2;
	if (stacks->pos_a > half_a && stacks->pos_b > half_b)
		ft_reverse_both(stacks);
	else if (stacks->pos_a && stacks->pos_a <= half_a
		&& stacks->pos_b && stacks->pos_b <= half_b)
		ft_rotate_both(stacks);
}
