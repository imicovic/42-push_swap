/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:16:20 by igormic           #+#    #+#             */
/*   Updated: 2024/09/01 20:35:36 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/push_swap.h"

void	r_rotate(t_list **a, t_list **b)
{
	rotate(a, 0);
	rotate(b, 0);
	write(1, "rr\n", 3);
}

/*
int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	lstaddback(&a, lstnew(1));
	lstaddback(&a, lstnew(2));
	lstaddback(&a, lstnew(3));
	lstaddback(&b, lstnew(4));
	lstaddback(&b, lstnew(5));
	lstaddback(&b, lstnew(6));
	r_rotate(&a, &b);
	while (a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
	while (b)
	{
		printf("%d\n", b->data);
		b = b->next;
	}
}*/
