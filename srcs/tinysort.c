/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinysort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:36:52 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 15:36:52 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/libft.h"
#include "../lib/include/push_swap.h"

static int	index_min(t_list *a, t_list *min)
{
	int	i;

	i = 0;
	while (a != min)
	{
		i++;
		a = a->next;
	}
	return (i);
}

static void	push_min_top(t_list **a, t_list *min)
{
	int	index;

	index = index_min(*a, min);
	while (index <= 3 && *a != min)
		rotate(a, 1);
	while (index > 3 && *a != min)
		revrot(a, 1);
}

void	tinysort(t_list **list)
{
	t_list	*max;

	if (!list)
		return ;
	if (lstsize(*list) == 2)
	{
		swap(*list, 1);
		return ;
	}
	max = find_max(*list);
	if ((*list)->data == max->data)
		rotate(list, 1);
	else if ((*list)->next->data == max->data)
		revrot(list, 1);
	if ((*list)->data > (*list)->next->data)
		swap(*list, 1);
}

void	notsotinysort(t_list **a, t_list **b)
{
	t_list	*min;

	while (lstsize(*a) != 3)
	{
		min = find_min(*a);
		push_min_top(a, min);
		push(a, b, 2);
	}
	tinysort(a);
	while (*b)
		push(b, a, 1);
}
