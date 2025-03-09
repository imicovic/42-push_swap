/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:34:28 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 16:32:17 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = init(argc, argv);
	if (!a)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	if (!issorted(a))
	{
		if (lstsize(a) <= 3)
			tinysort(&a);
		else if (lstsize(a) <= 5)
			notsotinysort(&a, &b);
		else
			sort_stacks(&a, &b);
	}
	lstclear(a);
	return (0);
}
