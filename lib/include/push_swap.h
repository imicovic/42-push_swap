/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igormic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:12:46 by igormic           #+#    #+#             */
/*   Updated: 2024/09/04 16:31:56 by imicovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include "libft.h"

/* instrictions */

void	push(t_list **a, t_list **b, int mode);
void	swap(t_list *list, int mode);
void	rotate(t_list **list, int mode);
void	revrot(t_list **list, int mode);
void	s_swap(t_list *a, t_list *b);
void	r_rotate(t_list **a, t_list **b);
void	r_revrot(t_list **a, t_list **b);

/* tinysort.c */

void	notsotinysort(t_list **a, t_list **b);
void	tinysort(t_list **list);

/* utils.c */

void	init_b(t_list **a, t_list **b);
bool	issorted(t_list *list);
t_list	*find_max(t_list *list);
t_list	*find_min(t_list *list);

/* parsing */

t_list	*init(int argc, char *argv[]);

/* init_values_a.c */

t_list	*closest_smaller(int data, t_list *b);
void	set_index(t_list *list);
void	init_nodes_a(t_list *a, t_list *b);

/* sort.c */

void	sort_stacks(t_list **a, t_list **b);

/* init_nodes_b.c */

int		rotate_top_a(t_list **a, t_list **b);
void	init_nodes_b(t_list *a, t_list *b);
void	rotate_one(t_list **list, t_list *target, int mode);
void	rotate_top_b(t_list **a, t_list **b);

#endif
