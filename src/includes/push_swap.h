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

typedef struct s_db_list
{
	int					val;
	int					pos;
	struct s_db_list	*next;
	struct s_db_list	*prev;
}	t_db_list;

typedef struct s_stack
{
	t_db_list	*stack_a;
	t_db_list	*stack_b;
}	t_stack;

t_db_list	*ft_dblst_new(int val);
void		ft_dblstadd_back(t_db_list **lst, t_db_list *new);
void		ft_dblstadd_front(t_db_list **lst, t_db_list *new);
t_db_list	*ft_dblstfirst(t_db_list *lst);
t_db_list	*ft_dblstlast(t_db_list *lst);
void		ft_push(t_db_list **lst_i, t_db_list **lst_j);

#endif