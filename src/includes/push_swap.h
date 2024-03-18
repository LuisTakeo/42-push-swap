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

# include <limits.h>
# include "../../libs/libft/libft.h"
# include "../../libs/libft/ft_printf/includes/ft_printf.h"
# include "../../libs/libft/gnl/includes/get_next_line.h"

typedef struct s_db_list
{
	int					val;
	int					pos;
	int					target;
	int					cost;
	struct s_db_list	*next;
	struct s_db_list	*prev;
}	t_db_list;

typedef struct s_stack
{
	t_db_list	*stack_a;
	t_db_list	*stack_b;
	int			size_a;
	int			size_b;
	int			min_pos_a;
	int			max_pos;
	int			target_a;
	int			target_b;
	int			pos_a;
	int			pos_b;

}	t_stack;

// double linked list functions
t_db_list	*ft_dblst_new(int val);
void		ft_dblstadd_back(t_db_list **lst, t_db_list *new);
void		ft_dblstadd_front(t_db_list **lst, t_db_list *new);
t_db_list	*ft_dblstfirst(t_db_list *lst);
t_db_list	*ft_dblstlast(t_db_list *lst);
int			ft_dblstsize(t_db_list *lst);
void		ft_dblstclear(t_db_list **lst); // *new
void		ft_clear_stack(t_stack *stack);
// builds
t_db_list	*ft_build_list(int argc, char **argv);
t_stack		*ft_init_stack(t_db_list *lst_a, t_db_list *lst_b);
void		ft_clear_stack(t_stack *stack);
// movement functions
void		ft_push(t_db_list **lst_i, t_db_list **lst_j);
void		ft_rotate(t_db_list **lst);
void		ft_reverse_rotate(t_db_list **lst);
void		ft_swap(t_db_list **lst);
// put position
void		ft_put_order(t_db_list **lst);
int			ft_find_min_value(t_db_list *lst);
// print movements
void		ft_print_movement(t_stack *stacks, char *str);
// errors and validations
void		ft_print_error(char *msg);
int			ft_verify_duplicate(t_db_list **lst);
int			ft_is_ordered(t_db_list	*lst);
// Sorting
void		ft_sort(t_stack *stacks);
void		ft_sort_two(t_stack *stacks);
void		ft_sort_three(t_stack *stacks);
void		ft_sort_others(t_stack *stacks);
void		ft_put_a_in_b(t_stack *stacks);
void		ft_order_b_in_a(t_stack *stacks);
void		ft_put_target(t_stack *stacks);
void		ft_movement_in_a(t_stack *stacks);
void		ft_movement_in_b(t_stack *stacks);
void		ft_order_a(t_stack *stacks);
void		ft_find_target(t_stack *stacks);
void		ft_movement_in_both(t_stack *stacks);
// utils
void		ft_free_split(char **split);

#endif