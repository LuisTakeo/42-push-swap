/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:34:26 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/06 19:34:26 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*ft_init_stack(t_db_list *lst_a, t_db_list *lst_b)
{
	t_stack	*stacks;

	stacks = malloc(sizeof (t_stack) * 1);
	stacks->stack_a = lst_a;
	stacks->stack_b = lst_b;
	return (stacks);
}