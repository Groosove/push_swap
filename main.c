/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:11 by flavon            #+#    #+#             */
/*   Updated: 2021/03/17 22:33:25 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	ft_print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}
t_data	*init(void)
{
	t_data *data;

	data = (t_data *)malloc(sizeof(t_data));
	if (data)
	{
		data->a = NULL;
		data->b = NULL;
	}
	return (data);
}

void	ft_push_swap(t_data *data)
{
	ft_sa(data);
	return ;
}

int		main(int argc, char **argv)
{
	t_data	*data;
	int		i;

	data = init();
	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	if (data)
		while (++i != argc)
		{
			if (!check_value(argv[i]))
			{
				write(1, "Error\n", 6);
				break ;
			}
			push_front(&data->a, ft_atoi(argv[i]));
		}
	if (is_unsorted(data->a))
		ft_push_swap(data);
	return (0);
}
