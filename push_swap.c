/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:42:21 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/16 13:40:59 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	ft_free(t_list *list_)
{
	t_list	*current;
	t_list	*temp;

	current = list_;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}

int	error__(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		value;

	list_a = NULL;
	list_b = NULL;
	if (argc < 2)
		error__();
	list_a = list_create(argv);
	value = count_list(list_a);
	if (value == 2)
		return (0);
	else if (value == 3)
		sorting_3el(&list_a);
	else if (value == 4)
		sorting_4el(&list_a, &list_b);
	else if (value == 5)
		sorting_5el(&list_a, &list_b);
	else
	{
		sort_b(&list_a, &list_b, value);
		sort_a(&list_a, &list_b, value);
	}
	ft_free(list_a);
	return (0);
}
