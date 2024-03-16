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
	// put all values - 3 in B
	// order 3 in A
	// put positions where elements in B try to fit in A
	// verify the cost
	// t_db_list	*temp;

	while (stacks->size_a > 3)
	{
		ft_push(&stacks->stack_a, &stacks->stack_b);
		ft_print_movement(stacks, "pa");
		stacks->size_a = ft_dblstsize(stacks->stack_a);
	}
	ft_sort_three(stacks);
	ft_order_b_in_a(stacks);
}
