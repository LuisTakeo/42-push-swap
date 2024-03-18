/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:38:12 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 16:38:12 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_clear_stack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->stack_a)
		ft_dblstclear(&stack->stack_a);
	if (stack->stack_b)
		ft_dblstclear(&stack->stack_b);
	free (stack);
}
