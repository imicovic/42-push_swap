/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:51:25 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:33:04 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

void	min_to_top(t_list **a)
{
	t_list	*tmp;

	tmp = find_min(*a);
	rotate_one(a, tmp, 1);
}

void	sort_stacks(t_list **a, t_list **b)
{
	init_b(a, b);
	while (lstsize(*a) != 3)
	{
		init_nodes_a(*a, *b);
		rotate_top_a(a, b);
		push(a, b, 2);
	}
	tinysort(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		rotate_top_b(a, b);
		push(b, a, 1);
	}
	set_index(*a);
	min_to_top(a);
}
