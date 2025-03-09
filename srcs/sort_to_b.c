/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:57:06 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:33:08 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

void	rotate_one(t_list **list, t_list *target, int mode)
{
	while ((*list) != target)
	{
		if (target->median)
			rotate(list, mode);
		else if (!target->median)
			revrot(list, mode);
	}
}

void	rotate_both(t_list **a, t_list **b, t_list *cheapest_node)
{
	while (*a != cheapest_node && *b != cheapest_node->target)
	{
		if (cheapest_node->median && cheapest_node->target->median)
			r_rotate(a, b);
		else if (!cheapest_node->median && !cheapest_node->target->median)
			r_revrot(a, b);
		else
			break ;
	}
	set_index(*a);
	set_index(*b);
}

t_list	*get_cheapest(t_list *a)
{
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->cheapest == true)
			return (a);
		a = a->next;
	}
	return (NULL);
}

int	rotate_top_a(t_list **a, t_list **b)
{
	t_list	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (*a != cheapest_node && *b != cheapest_node->target)
		rotate_both(a, b, cheapest_node);
	rotate_one(a, cheapest_node, 1);
	rotate_one(b, cheapest_node->target, 2);
	return (0);
}

void	rotate_top_b(t_list **a, t_list **b)
{
	t_list	*target_node;

	target_node = (*b)->target;
	rotate_one(a, target_node, 1);
}
