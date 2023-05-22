/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:24:48 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/21 21:20:01 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*sorting_list(t_list *list_)
{
	t_list	*sort;
	t_list	*dummy;
	t_list	*index;
	int		temp;

	sort = list_;
	dummy = sort;
	while (sort != NULL)
	{
		index = sort->next;
		while (index != NULL)
		{
			if (sort->data > index->data)
			{
				temp = sort->data;
				sort->data = index->data;
				index->data = temp;
			}
			index = index->next;
		}
		sort = sort->next;
	}
	return (dummy);
}

