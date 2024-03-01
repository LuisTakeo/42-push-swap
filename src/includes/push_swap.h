/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:07:21 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/02/27 18:07:21 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libs/libft/libft.h"
# include "../../libs/libft/ft_printf/includes/ft_printf.h"
# include "../../libs/libft/gnl/includes/get_next_line.h"

typedef struct s_data
{
	int				val;
	int				pos;
	struct s_data	*next;
	struct s_data	*prev;
}	t_data;

typedef struct s_stack
{
	t_data	*stack_a;
	t_data	*stack_b;
}	t_stack;

#endif