/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:57:18 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/19 18:57:18 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

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
	int			max_pos;
}	t_stack;

t_db_list	*ft_dblst_new(int val);
void		ft_dblstadd_back(t_db_list **lst, t_db_list *new);
void		ft_dblstadd_front(t_db_list **lst, t_db_list *new);
t_db_list	*ft_dblstfirst(t_db_list *lst);
t_db_list	*ft_dblstlast(t_db_list *lst);
int			ft_dblstsize(t_db_list *lst);
void		ft_dblstclear(t_db_list **lst);
void		ft_clear_stack(t_stack *stack);
t_db_list	*ft_build_list(int argc, char **argv);
void		ft_sort(t_stack *stacks);
void		ft_push(t_db_list **lst_i, t_db_list **lst_j);
void		ft_reverse_rotate(t_db_list **lst);
void		ft_rotate(t_db_list **lst);
void		ft_swap(t_db_list **lst);
void		ft_free_split(char **split);
void		ft_print_error(char *msg);
t_stack		*ft_init_stack(t_db_list *lst_a, t_db_list *lst_b);
int			ft_verify_duplicate(t_db_list **lst);
void		ft_put_order(t_db_list **lst);
int			ft_is_ordered(t_db_list	*lst);

#endif