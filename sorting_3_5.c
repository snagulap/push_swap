/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:35:28 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/02 16:00:30 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_3el(t_list **list_a)
{
	if ((*list_a)->data > (*list_a)->next->data)
		swap_a(list_a);
	if ((*list_a)->next->data > (*list_a)->next->next->data)
		reverse_ra(list_a);
	if ((*list_a)->data > (*list_a)->next->data)
		swap_a(list_a);
}

int	smallest_ele(t_list **list_a)
{
	t_list	*smallest;
	t_list	*current;

	smallest = (*list_a);
	current = (*list_a)->next;
	while (current != NULL)
	{
		if (current->data < smallest->data)
		{
			smallest = current;
		}
		current = current->next;
	}
	return (smallest->data);
}

void	pushing_to_b1(t_list **list_a, t_list **list_b, int index)
{
	int	value;

	value = count_list(*list_a);
	if (index == 3)
	{
		if (value == 5)
		{
			reverse_ra(list_a);
			reverse_ra(list_a);
			push_b(list_a, list_b);
		}	
		else
		{	
			reverse_ra(list_a);
			push_b(list_a, list_b);
		}
	}
	else if (index == 4)
	{
		reverse_ra(list_a);
		push_b(list_a, list_b);
	}
}

void	pushing_to_b(t_list **list_a, t_list **list_b, int value)
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
}

void	sorting_5el(t_list **list_a, t_list **list_b)
{
	static int	value;
	int			index;

	value = smallest_ele(list_a);
	index = get_index(*list_a, value);
	pushing_to_b(list_a, list_b, index);
	pushing_to_b1(list_a, list_b, index);
	value = smallest_ele(list_a);
	index = get_index(*list_a, value);
	pushing_to_b(list_a, list_b, index);
	pushing_to_b1(list_a, list_b, index);
	sorting_3el(list_a);
	if ((*list_b)->data < (*list_b)->next->data)
		swap_b(list_b);
	push_a(list_a, list_b);
	push_a(list_a, list_b);
}
