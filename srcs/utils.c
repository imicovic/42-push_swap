/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:36:56 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:33:10 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

bool	issorted(t_list *list)
{
	if (!list)
		return (false);
	if (lstsize(list) == 1)
		return (true);
	while (list->next)
	{
		if (list->data > list->next->data)
			return (false);
		list = list->next;
	}
	return (true);
}

t_list	*find_max(t_list *list)
{
	t_list	*max;

	max = list;
	if (!list)
		return (0);
	while (list)
	{
		if (list->data > max->data)
			max = list;
		if (!list->next)
			break ;
		list = list->next;
	}
	return (max);
}

t_list	*find_min(t_list *list)
{
	t_list	*min;

	if (!list)
		return (0);
	min = list;
	while (list)
	{
		if (list->data < min->data)
			min = list;
		if (!list->next)
			break ;
		list = list->next;
	}
	return (min);
}

void	init_b(t_list **a, t_list **b)
{
	push(a, b, 2);
	push(a, b, 2);
}
