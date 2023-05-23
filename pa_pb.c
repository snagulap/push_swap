/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:45:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/23 14:43:06 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **list_a, t_list **list_b)
{
	t_list	*top;

	if (*list_b == NULL)
		return ;
	if ((*list_b))
	{
		top = (*list_b);
		(*list_b) = (*list_b)->next;
		top->next = (*list_a);
		(*list_a) = top;
	}
	printf("pb\n");
}

void	push_a(t_list **list_a, t_list **list_b)
{
	t_list	*top;

	if (*list_a == NULL)
		return ;
	if ((*list_a))
	{
		top = (*list_a);
		(*list_a) = (*list_a)->next;
		top->next = (*list_b);
		(*list_b) = top;
	}
	printf("pa\n");
}
