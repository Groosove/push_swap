/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opeation_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:18:03 by flavon            #+#    #+#             */
/*   Updated: 2021/03/17 22:34:11 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_data *data)
{
	int tmp = data->a->value;
	data->a->value = data->a->next->value;
	data->a->next->value = tmp;
}

void	ft_sb(t_data *data)
{
	int tmp = data->b->value;
	data->b->value = data->b->next->value;
	data->b->next->value = tmp;
}

void	ft_ss(t_data *data)
{
	ft_sa(data);
	ft_sb(data);
}
