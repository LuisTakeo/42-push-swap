/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:55:49 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/03/19 18:55:49 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker_bonus.h"

static int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	is_numeric(char *arg)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (!arg[i])
		return (1);
	while (arg[i] && is_space(arg[i]))
		i++;
	if (!arg[i])
		return (1);
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	if (!arg[i])
		return (1);
	while (arg[i] == '0')
		i++;
	while (ft_isdigit(arg[i]))
	{
		i++;
		size++;
	}
	if (arg[i] || size > 10)
		return (1);
	return (0);
}

static void	is_empty(char **split)
{
	if (!split)
		ft_print_error("Error");
}

static void	verify_args(int argc, char **argv)
{
	int		i;
	long	nbr;
	char	**splited;
	int		j;

	if (argc == 1)
		exit(EXIT_SUCCESS);
	i = 1;
	while (argv[i])
	{
		j = 0;
		splited = ft_split(argv[i], ' ');
		is_empty(splited);
		while (splited[j])
		{
			if (is_numeric(splited[j]))
				ft_print_error("Error");
			nbr = ft_atol(splited[j]);
			if (nbr > INT_MAX || nbr < INT_MIN)
				ft_print_error("Error");
			j++;
		}
		ft_free_split(splited);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*stacks;
	t_db_list	*list;

	verify_args(argc, argv);
	list = ft_build_list(argc, argv);
	stacks = ft_init_stack(list, NULL);
	ft_sort(stacks);
	ft_clear_stack(stacks);
	return (0);
}
