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
	stacks->min_pos_a = ft_find_min_value(stacks->stack_a);
	ft_put_target(stacks);
	// while (stacks->stack_b)
	// {

	// }
}