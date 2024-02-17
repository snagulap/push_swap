/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:46:03 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/26 21:51:39 by snagulap         ###   ########.fr       */
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
}

void	swap_a(t_list	**list_)
{
	sa(&(*list_));
	ft_printf("sa\n");
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
	ft_printf("sb\n");
}

void	swap_ss(t_list	**list_a, t_list **list_b)
{
	sa(&(*list_a));
	sb(&(*list_b));
	ft_printf("ss\n");
}
