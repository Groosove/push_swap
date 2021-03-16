/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:11 by flavon            #+#    #+#             */
/*   Updated: 2021/03/16 18:30:01 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*init() {
	t_data *data;

	data = (t_data *)malloc(sizeof(t_data));
	if (data) {
		data->a = NULL;
		data->b = NULL;
	}
	return (data);
}
int main(int argc, char **argv) { 
	t_data *data;

	
	return (0);
}