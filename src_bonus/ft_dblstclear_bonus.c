/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:45:48 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 16:45:48 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker_bonus.h"

void	ft_dblstclear(t_db_list **lst)
{
	t_db_list	*temp;

	temp = *lst;
	while (temp)
	{
		temp = (*lst)->next;
		free(*lst);
		if (temp)
			temp->prev = NULL;
		*lst = temp;
	}
}
