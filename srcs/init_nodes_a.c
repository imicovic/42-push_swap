/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:50:14 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:32:52 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

void	set_index(t_list *list)
{
	int	size;
	int	index;
	int	median;

	size = lstsize(list);
	index = 0;
	median = size / 2;
	while (list)
	{
		if (index <= median)
		{
			list->median = true;
			list->cost = index;
		}
		else
		{
			list->median = false;
			list->cost = size - index;
		}
		list->index = index++;
		list = list->next;
	}
}

static void	set_target_a(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*target_node;
	long	best_match;

	while (a)
	{
		best_match = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->data < a->data && current_b->data > best_match)
			{
				best_match = current_b->data;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match == LONG_MIN)
			a->target = find_max(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

static void	cost_analysis_a(t_list *a, t_list *b)
{
	int	size_a;
	int	len_b;

	size_a = lstsize(a);
	len_b = lstsize(b);
	while (a)
	{
		a->cost = a->index;
		if (!a->median)
			a->cost = size_a - a->index;
		if (a->target->median)
			a->cost += a->target->index;
		else
			a->cost += len_b - a->target->index;
		a = a->next;
	}
}

static void	set_cheapest(t_list *list)
{
	long	cheapest;
	t_list	*cheapest_node;

	if (!list)
		return ;
	cheapest = LONG_MAX;
	while (list)
	{
		list->cheapest = false;
		if (list->cost < cheapest)
		{
			cheapest = list->cost;
			cheapest_node = list;
		}
		list = list->next;
	}
	cheapest_node->cheapest = true;
}

void	init_nodes_a(t_list *a, t_list *b)
{
	set_index(a);
	set_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}
