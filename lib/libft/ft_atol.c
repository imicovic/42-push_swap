/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:00:34 by igormic           #+#    #+#             */
/*   Updated: 2024/08/29 13:38:32 by igormic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

long	ft_atol(char *s)
{
	int		i;
	long	flag;
	long	num;

	i = 0;
	num = 0;
	flag = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			flag = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num *= 10;
		num += s[i] - '0';
		i++;
	}
	return (num * flag);
}
