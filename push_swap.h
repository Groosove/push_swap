/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:21:20 by flavon            #+#    #+#             */
/*   Updated: 2021/03/17 21:13:49 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
typedef struct 		s_stack {
	int 			value;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct 		s_data
{
	t_stack			*a;
	t_stack			*b;
}					t_data;

/*
*	operation function
*/



/*
* 	stack methods 
*/

void 				push_back(t_stack **begin, int value);
void				push_front(t_stack **lst, int value);

/*
*	utils_function
*/

int					ft_atoi(const char *src);
int 				check_value(char *dst);