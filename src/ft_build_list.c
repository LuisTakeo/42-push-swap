/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:47:08 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/06 19:47:08 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_db_list	*ft_build_list(int argc, char **argv)
{
	t_db_list	*lst;
	int			i;
	int			value;

	lst = NULL;
	i = 1;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		ft_dblstadd_back(&lst, ft_dblst_new(value));
		i++;
	}
	ft_put_order(&lst);
	return (lst);
}
