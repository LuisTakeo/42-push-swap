/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaim-yu <tpaim-yu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:06:19 by tpaim-yu          #+#    #+#             */
/*   Updated: 2024/02/27 18:06:19 by tpaim-yu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_print_error(char *msg)
{
	ft_putendl_fd(msg, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_numeric(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] && is_space(arg[i]))
		i++;
	if (!arg[i])
		return (1);
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] == '0')
		i++;
	while (ft_isdigit(arg[i]))
		i++;
	if (arg[i])
		return (1);
	return (0);
}

void	verify_args(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		ft_print_error("Quantidade de argumentos inválida.");
	i = 1;
	while (argv[i])
	{
		if (is_numeric(argv[i]))
			ft_print_error("Argumento inválido.");
		ft_printf("%s\n", argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	verify_args(argc, argv);
	return (0);
}
