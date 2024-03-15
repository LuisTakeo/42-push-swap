/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:38:41 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 16:38:41 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_sort_three(t_stack *stacks)
{
	t_db_list	*temp;

	temp = stacks->stack_a->next;
	if (stacks->stack_a->pos > temp->pos
		&& stacks->stack_a->pos > temp->next->pos)
	{
		ft_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "ra");
		temp = stacks->stack_a->next;
	}
	if (temp->pos > stacks->stack_a->pos
		&& temp->pos > temp->next->pos)
	{
		ft_reverse_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "rra");
	}
	if (stacks->stack_a->pos > stacks->stack_a->next->pos)
	{
		ft_swap(&stacks->stack_a);
		ft_print_movement(stacks, "sa");
	}
}
