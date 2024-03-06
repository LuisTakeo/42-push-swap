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
	int		i;
	long	nbr;

	if (argc == 1)
		ft_print_error("Quantidade de argumentos inválida.");
	i = 1;
	while (argv[i])
	{
		if (is_numeric(argv[i]))
			ft_print_error("Argumento(s) inválido(s). Insira somente números.");
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_print_error("Argumento maior ou menor que um INT.");
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*stacks;
	t_db_list	*list;

	verify_args(argc, argv);
	// TODO validação de números repetidos
	list = ft_build_list(argc, argv);
	stacks = ft_init_stack(list, NULL);
	// teste impressão
	while (list->next)
	{
		ft_printf("%d\n", list->pos);
		list = list->next;
	}
	ft_printf("%d\n", list->pos);
	list = stacks->stack_a;
	ft_printf("Começo: %d\n", list->pos);
	free(stacks);
	return (0);
}
