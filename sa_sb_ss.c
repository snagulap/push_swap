/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:46:03 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/22 18:19:55 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	swap_a(struct s_2stacks *two_stacks)
// {
// 	t_node	*temp;

// 	if (two_stacks->stack_a && two_stacks->stack_a->next)
// 	{
// 		temp = two_stacks->stack_a->next;
// 		two_stacks->stack_a->next = two_stacks->stack_a->next->next;
// 		if (two_stacks->stack_a->next)
// 			two_stacks->stack_a->next->prev = two_stacks->stack_a;
// 		temp->next = two_stacks->stack_a;
// 		temp->prev = NULL;
// 		two_stacks->stack_a->prev = temp;
// 		two_stacks->stack_a = temp;
// 	}
// }		

void	sa(t_list **current)
{
	t_list	*temp;

	if ((*current) && (*current)->next)
	{
		temp = (*current)->next;
		(*current)->next = (*current)->next->next;
		if ((*current)->next)
			(*current)->next->prev = (*current);
		temp->next = (*current);
		temp->prev = NULL;
		// temp->next = (*current);
		(*current)->prev = temp;
		(*current) = temp;
		// current->next = NULL;
	}
}

void	swap_a(t_list	*list_)
{
	sa(&list_);
	printf("\n");
}

// void	sa(t_list *list_)
// {
// 	int		tmp;
// 	t_list	*current;

// 	current = list_;
// 	if (current && current->next)
// 	{
// 		tmp = current->data;
// 		current->data = current->next->data;
// 		current->next->data = tmp;
// 	}
// }


void	sb(t_list **current)
{
	t_list	*index;

	if ((*current) && (*current)->next)
	{
		index = (*current)->next;
		(*current)->next = (*current)->next->next;
		index->next = (*current);
		(*current) = index;
	}
}

void	swap_b(t_list	*list_)
{
	sb(&list_);
	printf("sb\n");
}

void	swap_ss(t_list	*list_)
{
	sa(&list_);
	sb(&list_);
	printf("ss\n");
}
