/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:18:21 by igormic           #+#    #+#             */
/*   Updated: 2024/08/29 11:05:12 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*lstnew(int data)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
