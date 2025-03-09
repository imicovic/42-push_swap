/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:23:13 by igormic           #+#    #+#             */
/*   Updated: 2024/09/01 20:34:12 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	revrot(t_list **list, int mode)
{
	t_list	*head;
	t_list	*tail;

	if (!list || !*list || !(*list)->next)
		return ;
	head = *list;
	tail = lstlast(*list);
	while (head)
	{
		if (!head->next->next)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *list;
	*list = tail;
	if (mode == 1)
		write(1, "rra\n", 4);
	else if (mode == 2)
		write (1, "rrb\n", 4);
}

/*
#include <stdio.h>

int main(void)
{
	t_list	*list;
	t_list	*tmp;


	list = NULL;
	lstaddback(&list, lstnew(1));
	lstaddback(&list, lstnew(2));
	lstaddback(&list, lstnew(3));
	revrot(&list);
	tmp = list;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	lstclear(list);
}*/
