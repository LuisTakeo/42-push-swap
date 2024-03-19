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

#include "./includes/checker_bonus.h"

static void	ft_rotate_both(t_stack *stacks, int direction)
{
	if (direction == 0)
	{
		ft_rotate(&stacks->stack_a);
		ft_rotate(&stacks->stack_b);
	}
	else if (direction == 1)
	{
		ft_reverse_rotate(&stacks->stack_a);
		ft_reverse_rotate(&stacks->stack_b);
	}
}

static void	ft_put_movement(t_stack *stacks, char *line)
{
	if (!ft_strncmp(line, "sa\n", 3))
		ft_swap(&stacks->stack_a);
	else if (!ft_strncmp(line, "sb\n", 3))
		ft_swap(&stacks->stack_b);
	else if (!ft_strncmp(line, "ra\n", 3))
		ft_rotate(&stacks->stack_a);
	else if (!ft_strncmp(line, "rb\n", 3))
		ft_rotate(&stacks->stack_b);
	else if (!ft_strncmp(line, "rr\n", 3))
		ft_rotate_both(stacks, 0);
	else if (!ft_strncmp(line, "pa\n", 3))
		ft_push(&stacks->stack_b, &stacks->stack_a);
	else if (!ft_strncmp(line, "pb\n", 3))
		ft_push(&stacks->stack_a, &stacks->stack_b);
	else if (!ft_strncmp(line, "rra\n", 4))
		ft_reverse_rotate(&stacks->stack_a);
	else if (!ft_strncmp(line, "rrb\n", 4))
		ft_reverse_rotate(&stacks->stack_b);
	else if (!ft_strncmp(line, "rrr\n", 4))
		ft_rotate_both(stacks, 1);
}

void	ft_sort(t_stack *stacks)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		ft_put_movement(stacks, line);
		free(line);
		line = get_next_line(0);
	}
	if (!ft_is_ordered(stacks->stack_a))
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
}
