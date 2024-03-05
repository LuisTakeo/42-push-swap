/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:59:15 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/05 15:59:15 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void        rotate(t_db_list **lst)
{
    t_db_list   *temp;
    t_db_list   *last;

    if (!lst || !(*lst))
        return ;
    temp = ft_dblstfirst(*lst);
    if (!temp->next)
        return ;
    ft_dblstadd_back(lst, temp);
    *lst = (*lst)->next;
    (*lst)->prev = NULL;
    temp->next = NULL;
}