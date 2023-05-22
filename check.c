/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:19:23 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/21 17:55:17 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(t_list *list_)
{
	t_list	*current;
	t_list	*previous;

	current = list_;
	while (current != NULL)
	{
		previous = current->next;
		while (previous != NULL)
		{
			if (current->data == previous->data)
			{
				printf("detected duplicate");
				return (1);
			}
			previous = previous->next;
		}
		current = current->next;
	}
	return (0);
}
