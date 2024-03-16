/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:30 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/15 19:16:30 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static void	ft_search_target(t_stack *stacks, t_db_list **stack_b)
{
	t_db_list	*temp_a;
	t_db_list	*temp_b;
	int			cost;
	int			half;

	temp_a = stacks->stack_a;
	temp_b = *stack_b;
	cost = 0;
	half = stacks->size_a / 2;
	while (temp_a)
	{
		if (temp_a->pos > temp_b->pos && (temp_b->target < temp_b->pos
				|| temp_a->pos < temp_b->target))
		{
			temp_b->target = temp_a->pos;
			temp_b->cost = cost;
		}
		cost++;
		temp_a = temp_a->next;
	}
	if (temp_b->target < temp_b->pos)
		temp_b->target = stacks->min_pos_a;
	if (temp_b->cost >= half)
		temp_b->cost = stacks->size_a - temp_b->cost;
}

void	ft_put_target(t_stack *stacks)
{
	t_db_list	*temp_b;
	int			cost_b;
	int			half;

	cost_b = 0;
	temp_b = stacks->stack_b;
	half = stacks->size_b / 2;
	while (temp_b)
	{
		ft_search_target(stacks, &temp_b);
		if (cost_b >= half)
			temp_b->cost += (stacks->size_b - cost_b);
		else
			temp_b->cost += cost_b;
		cost_b++;
		temp_b = temp_b->next;
	}
}
