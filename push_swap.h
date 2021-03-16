/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:20 by flavon            #+#    #+#             */
/*   Updated: 2021/03/16 18:28:18 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
typedef struct s_stack {
	int a;
	struct s_stack *next;
	struct s_stack *prev;
}				t_stack;

typedef struct s_data
{
	t_stack		*a;
	t_stack		*b;
}				t_data;
