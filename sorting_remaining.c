/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_remaining.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:21:36 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/12 20:06:01 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushing_to_b_4(t_list **list_a, t_list **list_b, int value)
{
	if (value == 0)
		push_b(list_a, list_b);
	else if (value == 1)
	{
		swap_a(list_a);
		push_b(list_a, list_b);
	}
	else if (value == 2)
	{
		rotate_a(list_a);
		swap_a(list_a);
		push_b(list_a, list_b);
	}
	else if (value == 3)
	{
		reverse_ra(list_a);
		push_b(list_a, list_b);
	}
}

void	sorting_4el(t_list **list_a, t_list **list_b)
{
	int	value;
	int	index;

	value = smallest_ele(list_a);
	index = get_index(*list_a, value);
	pushing_to_b_4(list_a, list_b, index);
	sorting_3el(list_a);
	push_a(list_a, list_b);
}

void	sort_b(t_list **list_a, t_list **list_b, int nodes)
{
	int	i;
	int	len;

	i = 0;
	len = (nodes / 15) * 1.3;
	while (*list_a)
	{
		if ((*list_a)->index <= i)
		{
			push_b(list_a, list_b);
			rotate_b(list_b);
			i++;
		}
		else if ((*list_a)->index <= i + len)
		{
			push_b(list_a, list_b);
			i++;
		}
		else
			rotate_a(list_a);
	}
}

void	sort_a(t_list **list_a, t_list **list_b, int nodes)
{
	int	rotate_b_;
	int	reverser_b;

	while (nodes > 0)
	{
		rotate_b_ = rotate__((*list_b), nodes - 1);
		reverser_b = nodes - rotate_b_;
		if (rotate_b_ > reverser_b)
		{
			while ((*list_b)->index != nodes - 1)
				reverse_rb(list_b);
			push_a(list_a, list_b);
			nodes--;
		}
		else
		{
			while ((*list_b)->index != nodes - 1)
				rotate_b(list_b);
			push_a(list_a, list_b);
			nodes--;
		}
	}
}
