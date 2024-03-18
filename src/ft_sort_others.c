/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_others.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:12:38 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 18:12:38 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_sort_others(t_stack *stacks)
{
	if (stacks->size_a > 10)
		ft_put_a_in_b(stacks);
	while (stacks->size_a > 3)
	{
		ft_push(&stacks->stack_a, &stacks->stack_b);
		ft_print_movement(stacks, "pb");
		stacks->size_a = ft_dblstsize(stacks->stack_a);
	}
	stacks->size_b = ft_dblstsize(stacks->stack_b);
	ft_sort_three(stacks);
	ft_order_b_in_a(stacks);
	ft_order_a(stacks);
}
