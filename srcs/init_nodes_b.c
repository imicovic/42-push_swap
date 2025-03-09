/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:50:45 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:32:58 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

void	set_target_b(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*target_node;
	long	best_match;

	best_match = LONG_MAX;
	current_a = a;
	while (current_a)
	{
		if (current_a->data > b->data && current_a->data < best_match)
		{
			best_match = current_a->data;
			target_node = current_a;
		}
		current_a = current_a->next;
	}
	if (best_match == LONG_MAX)
		b->target = find_min(a);
	else
		b->target = target_node;
}

void	init_nodes_b(t_list *a, t_list *b)
{
	set_index(a);
	set_index(b);
	set_target_b(a, b);
}
