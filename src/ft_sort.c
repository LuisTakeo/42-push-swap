/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:18:14 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 20:18:14 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_sort(t_stack *stacks)
{
	if (ft_is_ordered(stacks->stack_a))
		return ;
	if (stacks->size_a == 2)
		ft_sort_two(stacks);
	if (stacks->size_a == 3)
		ft_sort_three(stacks);
	if (stacks->size_a > 3)
		ft_sort_others(stacks);
}
