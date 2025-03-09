/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:34:49 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 13:19:10 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	push(t_list **a, t_list **b, int mode)
{
	t_list	*tmp;

	if (!*a || !a || !b)
		return ;
	tmp = *a;
	lstaddfront(b, lstnew((*a)->data));
	if (!(*a)->next)
		*a = NULL;
	else
		*a = (*a)->next;
	free(tmp);
	if (mode == 1)
		write(1, "pa\n", 3);
	else if (mode == 2)
		write(1, "pb\n", 3);
}
