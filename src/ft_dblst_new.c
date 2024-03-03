/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbllstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:53:24 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/02 16:53:24 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_db_list	*ft_dblst_new(int val)
{
	t_db_list	*new;

	new = malloc(sizeof(t_db_list));
	if (!new)
		return (NULL);
	new->val = val;
	new->pos = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
