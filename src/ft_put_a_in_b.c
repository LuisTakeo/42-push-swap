/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_a_in_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:33:29 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/17 18:33:29 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int	ft_is_minor_half(t_db_list *stack, int half)
{
	t_db_list	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->pos < half)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	ft_put_a_in_b(t_stack *stacks)
{
	int	half;
	int	quarter;

	half = stacks->size_a / 2;
	quarter = half / 2;
	while (ft_is_minor_half(stacks->stack_a, quarter))
	{
		if (stacks->stack_a->pos < quarter)
		{
			ft_push(&stacks->stack_a, &stacks->stack_b);
			ft_print_movement(stacks, "pb");
		}
		else
		{
			ft_rotate(&stacks->stack_a);
			ft_print_movement(stacks, "ra");
		}
		stacks->size_a = ft_dblstsize(stacks->stack_a);
		stacks->size_b = ft_dblstsize(stacks->stack_b);
	}
	while (ft_is_minor_half(stacks->stack_a, half))
	{
		if (stacks->stack_a->pos < half)
		{
			ft_push(&stacks->stack_a, &stacks->stack_b);
			ft_print_movement(stacks, "pb");
		}
		else
		{
			ft_rotate(&stacks->stack_a);
			ft_print_movement(stacks, "ra");
		}
		stacks->size_a = ft_dblstsize(stacks->stack_a);
		stacks->size_b = ft_dblstsize(stacks->stack_b);
	}
}
