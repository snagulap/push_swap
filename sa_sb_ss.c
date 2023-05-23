/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:46:03 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/23 13:51:15 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"		

void	sa(t_list **current)
{
	t_list	*index;

	if ((*current) && (*current)->next)
	{
		index = (*current)->next;
		(*current)->next = index->next;
		index->next = (*current);
		(*current) = index;
	}
	printf("sa\n");
}

void	swap_a(t_list	**list_)
{
	sa(&(*list_));
	printf("sa\n");
}

void	sb(t_list **current)
{
	t_list	*index;

	if ((*current) && (*current)->next)
	{
		index = (*current)->next;
		(*current)->next = index->next;
		index->next = (*current);
		(*current) = index;
	}
}

void	swap_b(t_list	**list_)
{
	sb(&(*list_));
	printf("sb\n");
}

void	swap_ss(t_list	**list_)
{
	sa(&(*list_));
	sb(&(*list_));
	printf("ss\n");
}
