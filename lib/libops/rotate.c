/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:52:36 by igormic           #+#    #+#             */
/*   Updated: 2024/09/04 15:37:56 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

void	rotate(t_list **list, int mode)
{
	t_list	*head;
	t_list	*tail;

	if (!list || !*list || !(*list)->next)
		return ;
	head = *list;
	tail = lstlast(head);
	*list = head->next;
	head->next = NULL;
	tail->next = head;
	if (mode == 1)
		write(1, "ra\n", 3);
	else if (mode == 2)
		write (1, "rb\n", 3);
}
