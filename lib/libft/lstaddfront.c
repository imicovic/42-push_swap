/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:34:01 by igormic           #+#    #+#             */
/*   Updated: 2024/08/29 11:15:06 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	lstaddfront(t_list **list, t_list *node)
{
	if (!list || !node)
		return ;
	if (!*list)
	{
		*list = node;
		return ;
	}
	node->next = *list;
	(*list)->prev = node;
	*list = node;
}
