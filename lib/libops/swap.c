/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:27:44 by igormic           #+#    #+#             */
/*   Updated: 2024/09/01 20:32:52 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	swap(t_list *list, int mode)
{
	int	tmp;

	if (!list || !list->next)
		return ;
	tmp = list->data;
	list->data = list->next->data;
	list->next->data = tmp;
	if (mode == 1)
		write(1, "sa\n", 3);
	else if (mode == 2)
		write (1, "sb\n", 3);
}
