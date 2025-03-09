/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:03:07 by igormic           #+#    #+#             */
/*   Updated: 2024/08/22 22:10:55 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	printlist(t_list *list)
{
	if (!list)
		return ;
	while (list)
	{
		ft_putnbr_fd(list->data, 1);
		write(1, "\n", 1);
		list = list->next;
	}
}
