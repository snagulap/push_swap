/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:24:48 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/09 15:15:49 by snagulap         ###   ########.fr       */
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

int	is_sorted(t_list *list_a)
{
	t_list	*dummy;

	if (list_a == NULL && list_a->next == NULL)
		return (1);
	dummy = list_a;
	while (dummy->next)
	{
		if (dummy->data > dummy->next->data)
			return (1);
		dummy = dummy->next;
	}
	return (0);
}

void	sort(int arr[], int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	get_index_1(char **list_, int nodes, t_list *list_a)
{
	int		i;
	int		*sorted;
	t_list	*cursor;

	i = 0;
	sorted = (int *)malloc(sizeof(int) * (nodes + 1));
	while (list_[i])
	{
		sorted[i] = ft_atoi_check(list_[i]);
		i++;
	}
	sort(sorted, nodes);
	cursor = list_a;
	while (cursor)
	{
		i = 0;
		while (i < nodes)
		{
			if (cursor->data == sorted[i])
				cursor->index = i;
			i++;
		}
		cursor = cursor->next;
	}
	free(sorted);
}

void	print_list(t_list *head)
{
	while (head != NULL)
	{
		ft_printf("%d -> ", head->data);
		head = head->next;
	}
}
