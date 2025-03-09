/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:36:30 by igormic           #+#    #+#             */
/*   Updated: 2024/08/28 15:37:36 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	lstsize(t_list *list)
{
	int	size;

	if (!list)
		return (0);
	size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}
