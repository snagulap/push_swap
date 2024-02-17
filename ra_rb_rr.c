/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:59:44 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/26 21:52:03 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **list_a)
{
	t_list	*rotate;
	t_list	*tmp;

	if ((*list_a) && (*list_a)->next)
	{
		rotate = (*list_a);
		(*list_a) = (*list_a)->next;
		rotate->next = NULL;
		tmp = (*list_a);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = rotate;
		ft_printf("ra\n");
	}
}

void	rotate_b(t_list **list_b)
{
	t_list	*rotate;
	t_list	*tmp;

	if ((*list_b) && (*list_b)->next)
	{
		rotate = (*list_b);
		(*list_b) = (*list_b)->next;
		rotate->next = NULL;
		tmp = (*list_b);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = rotate;
		ft_printf("rb\n");
	}
}

void	rotate_a_b(t_list **list_a, t_list **list_b)
{
	rotate_a(list_a);
	rotate_b(list_b);
}
