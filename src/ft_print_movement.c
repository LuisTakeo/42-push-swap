/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_movement.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:55:37 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/06 16:55:37 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_print_movement(t_stack *stacks, char *str)
{
	t_db_list	*temp;

	if (str)
		ft_printf("%s\n", str);
	temp = stacks->stack_a;
	// ft_printf("Stack A: ");
	// while (temp && temp->next)
	// {
	// 	ft_printf("%d - ", temp->val);
	// 	temp = temp->next;
	// }
	// if (temp)
	// 	ft_printf("%d", temp->val);
	// ft_printf("\n");
	// temp = stacks->stack_b;
	// ft_printf("Stack B: ");
	// while (temp && temp->next)
	// {
	// 	ft_printf("%d - ", temp->val);
	// 	temp = temp->next;
	// }
	// if (temp)
	// 	ft_printf("%d", temp->val);
	// ft_printf("\n");
}
