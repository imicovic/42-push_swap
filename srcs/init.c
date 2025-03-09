/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imicovic <imicovic@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:49:53 by imicovic          #+#    #+#             */
/*   Updated: 2024/09/04 15:44:18 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/include/push_swap.h"

static char	**split_and_join(int argc, char **argv)
{
	int		i;
	int		count;
	char	*s;
	char	*tmp;
	char	**ptr;

	i = 0;
	count = 0;
	while (++i < argc)
		count += ft_strlen(argv[i]);
	s = (char *) ft_calloc(sizeof(char) * count + argc, 1);
	i = 0;
	tmp = s;
	while (++i < argc)
	{
		count = -1;
		while (argv[i][++count])
			*tmp++ = argv[i][count];
		*tmp++ = ' ';
	}
	ptr = ft_split(s, ' ');
	if (!ptr)
		return (NULL);
	free(s);
	return (ptr);
}

static int	strcheck(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	dup_check(int *arr, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static t_list	*size_matters(char **ptr, int count)
{
	int		i;
	int		*arr;
	long	l;
	t_list	*list;

	i = -1;
	list = NULL;
	arr = (int *) malloc(sizeof(int) * count);
	while (ptr[++i])
	{
		l = ft_atol(ptr[i]);
		if (strcheck(ptr[i]) && l >= INT_MIN && l <= INT_MAX)
			*(arr + i) = l;
		else
		{
			free(arr);
			return (NULL);
		}
	}
	i = -1;
	if (dup_check(arr, count))
		while (++i < count)
			lstaddback(&list, lstnew(*(arr + i)));
	free(arr);
	return (list);
}

t_list	*init(int argc, char *argv[])
{
	int		count;
	char	**ptr;
	t_list	*list;

	if (argc == 1)
		return (NULL);
	ptr = split_and_join(argc, argv);
	count = 0;
	while (ptr[count])
		count++;
	list = size_matters(ptr, count);
	tabfree(ptr);
	if (!list)
		return (NULL);
	return (list);
}
