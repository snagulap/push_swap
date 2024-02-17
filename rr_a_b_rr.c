/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_a_b_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:45:54 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/26 21:51:53 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_ra(t_list **list_a)
{
	t_list	*reverse;
	t_list	*tmp;

	if ((*list_a) && ((*list_a)->next))
	{
		reverse = (*list_a);
		tmp = NULL;
		while (reverse->next)
		{
			tmp = reverse;
			reverse = reverse->next;
		}
		tmp->next = NULL;
		reverse->next = (*list_a);
		(*list_a) = reverse;
		ft_printf("rra\n");
	}
}

void	reverse_rb(t_list **list_b)
{
	t_list	*reverse;
	t_list	*tmp;

	if ((*list_b) && ((*list_b)->next))
	{
		reverse = (*list_b);
		tmp = NULL;
		while (reverse->next)
		{
			tmp = reverse;
			reverse = reverse->next;
		}
		tmp->next = NULL;
		reverse->next = (*list_b);
		(*list_b) = reverse;
		ft_printf("rrb\n");
	}
}

void	reverse_rotate_ab(t_list **list_a, t_list **list_b)
{
	reverse_ra(&(*list_a));
	reverse_rb(&(*list_b));
}
