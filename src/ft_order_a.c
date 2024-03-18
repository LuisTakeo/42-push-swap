/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:07:19 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/17 19:07:19 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	ft_search_min(t_db_list *stack, int min)
{
	t_db_list	*temp;
	int			i;

	temp = stack;
	i = 0;
	while (temp)
	{
		if (temp->pos == min)
			return (i);
		i++;
		temp = temp->next;
	}
	return (i);
}

static void	ft_rotate_a(t_stack *stacks, int target)
{
	while (stacks->stack_a->pos != target)
	{
		ft_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "ra");
	}
}

static void	ft_reverse_a(t_stack *stacks, int target)
{
	while (stacks->stack_a->pos != target)
	{
		ft_reverse_rotate(&stacks->stack_a);
		ft_print_movement(stacks, "rra");
	}
}

void	ft_order_a(t_stack *stacks)
{
	int			i;

	i = ft_search_min(stacks->stack_a, 1);
	if (i > stacks->size_a / 2)
		ft_reverse_a(stacks, 1);
	else if (i > 0)
		ft_rotate_a(stacks, 1);
}
