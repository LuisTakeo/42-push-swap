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

static void	ft_is_duplicated(t_db_list **lst)
{
	t_db_list	*temp;

	temp = *lst;
	if (ft_verify_duplicate(&temp))
	{
		ft_dblstclear(&temp);
		ft_print_error("Error");
	}
}

t_db_list	*ft_build_list(int argc, char **argv)
{
	t_db_list	*lst;
	int			i;
	int			value;
	int			j;
	char		**splited;

	lst = NULL;
	i = 1;
	while (i < argc)
	{
		splited = ft_split(argv[i], ' ');
		j = -1;
		while (splited[++j])
		{
			value = ft_atoi(splited[j]);
			ft_dblstadd_back(&lst, ft_dblst_new(value));
		}
		ft_free_split(splited);
		i++;
	}
	ft_is_duplicated(&lst);
	ft_put_order(&lst);
	return (lst);
}
