/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:19:23 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/09 15:15:36 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

void	ft_freemem(char **mem);

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
				ft_printf("detected duplicate");
				return (1);
			}
			previous = previous->next;
		}
		current = current->next;
	}
	return (0);
}

int	count_list(t_list *head)
{
	int	counter;

	counter = 0;
	while (head != NULL)
	{
		counter++;
		head = head->next;
	}
	return (counter);
}

char	**parsing_input(char **argv)
{
	char	*input;
	int		i;
	char	**argv_list;

	i = 1;
	input = ft_strdup("");
	while (argv[i])
	{
		input = ft_strjoin(input, argv[i]);
		i++;
	}
	argv_list = ft_split(input, ' ');
	free(input);
	return (argv_list);
}

t_list	*list_create(char **argv)
{
	char	**list_;
	t_list	*list_a;
	int		values;

	list_a = NULL;
	list_ = parsing_input(argv);
	list_a = creating_llist(list_a, list_);
	if (check_duplicate(list_a))
	{
		ft_freemem(list_);
		ft_free(list_a);
		free(list_);
		return (0);
	}
	if (!is_sorted(list_a))
	{
		ft_freemem(list_);
		ft_free(list_a);
		free(list_);
		return (0);
	}
	values = count_list(list_a);
	get_index_1(list_, values, list_a);
	ft_freemem(list_);
	return (free(list_), list_a);
}

void	ft_freemem(char **mem)
{
	int	i;

	i = 0;
	while (mem[i])
	{
		free(mem[i]);
		i++;
	}
}
