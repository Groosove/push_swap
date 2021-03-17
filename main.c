/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:11 by flavon            #+#    #+#             */
/*   Updated: 2021/03/17 21:33:09 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

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

int		main(int argc, char **argv)
{
	t_data *data;
	int i;

	data = init();
	i = 0;
	if (data)
	{
		while (++i != argc)
		{
			if (!check_value(argv[i]))
			{
				write(1, "Error\n", 6);
				break ;
			}
			push_front(&data->a, ft_atoi(argv[i]));
		}
	}
	while (data->a)
	{
		printf("%d\n", data->a->value);
		data->a = data->a->next;
	}
	return (0);
}
