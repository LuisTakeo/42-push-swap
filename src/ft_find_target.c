/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_target.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:46:27 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/18 16:46:27 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	ft_find_pos(t_db_list *stack, int target)
{
	t_db_list	*temp;
	t_db_list	*min;
	int			i;
	int			pos;

	temp = stack;
	min = temp;
	i = 0;
	pos = i;
	while (temp)
	{
		if (temp->pos == target)
		{
			pos = i;
			min = temp;
		}
		i++;
		temp = temp->next;
	}
	return (pos);
}

void	ft_find_target(t_stack *stacks)
{
	t_db_list	*temp;
	t_db_list	*min;
	int			i;
	int			pos;

	temp = stacks->stack_b;
	min = temp;
	i = 0;
	pos = i;
	while (temp)
	{
		if (temp->cost < min->cost)
		{
			pos = i;
			min = temp;
		}
		i++;
		temp = temp->next;
	}
	stacks->pos_b = pos;
	stacks->target_b = min->pos;
	stacks->target_a = min->target;
	stacks->pos_a = ft_find_pos(stacks->stack_a, stacks->target_a);
}
