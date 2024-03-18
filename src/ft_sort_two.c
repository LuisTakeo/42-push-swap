/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:26:36 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 20:26:36 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_sort_two(t_stack *stacks)
{
	t_db_list	*temp;

	temp = stacks->stack_a->next;
	if (stacks->stack_a->pos > temp->pos)
	{
		ft_swap(&stacks->stack_a);
		ft_print_movement(stacks, "sa");
	}
}
