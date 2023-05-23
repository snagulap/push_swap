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

void	ft_error(void)
{
	printf("Error\n");
	return ;
}

void	print_list(t_list *head)
{
	while (head != NULL)
	{
		printf("%d -> ", head->data);
		head = head->next;
	}
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

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		i;

	i = 1;
	list_a = NULL;
	list_b = NULL;
	if (argc == 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	list_a = creating_llist(list_a, argv);
	if (check_duplicate(list_a))
		return (0);
	rotate_a(&list_a);
	ft_free(list_a);
	system("leaks push_swap");
	return (0);
}
