/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:59:06 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/07 19:59:06 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker_bonus.h"

int	ft_dblstsize(t_db_list *lst)
{
	t_db_list	*temp;
	int			i;

	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
