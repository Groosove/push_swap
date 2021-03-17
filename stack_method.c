/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_method.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:08:11 by flavon            #+#    #+#             */
/*   Updated: 2021/03/17 22:22:55 by flavon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ft_lstlast(t_stack *lst)
{
	if (lst != 0)
	{
		while (lst->next != 0)
			lst = lst->next;
		return (lst);
	}
	return (0);
}

t_stack		*ft_lstnew(int content)
{
	t_stack *list;

	list = (t_stack *)malloc(sizeof(t_stack));
	if (list == NULL)
		return (NULL);
	list->value = content;
	list->next = NULL;
	return (list);
}

void		push_back(t_stack **begin, int value)
{
	t_stack *insert_node;

	if (*begin != 0)
	{
		insert_node = ft_lstlast(*begin);
		insert_node->next = ft_lstnew(value);
		return ;
	}
	*begin = ft_lstnew(value);
}

void		push_front(t_stack **lst, int value)
{
	t_stack *new;

	new = ft_lstnew(value);
	if (lst == 0)
		*lst = new;
	if (new != 0)
	{
		new->next = *lst;
		*lst = new;
	}
}
