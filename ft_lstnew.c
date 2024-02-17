/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:09:26 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/09 16:09:12 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(t_list *list_a, int data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->data = data;
	new->next = list_a;
	list_a = new;
	return (list_a);
}

long int	ft_atoi_check(char *str)
{
	int			i;
	int			j;
	long int	a_i;

	i = 0;
	j = 1;
	a_i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		j = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		a_i = (a_i * 10) + (str[i++] - '0');
	}
	a_i = a_i * j;
	if (a_i > INT_MAX || a_i < INT_MIN)
		ft_error();
	return (a_i);
}

t_list	*creating_llist(t_list *list_, char **argv)
{
	int			i;
	long int	num;

	i = 0;
	num = ft_atoi_check(argv[i]);
	i++;
	list_ = ft_lstnew(list_, num);
	while (argv[i])
	{
		num = ft_atoi_check(argv[i]);
		list_ = ft_addlast(list_, num);
		i++;
	}
	if (list_ == NULL)
		ft_error();
	return (list_);
}

t_list	*ft_addlast(t_list *new, int i)
{
	t_list	*list_;

	list_ = new;
	while (list_->next != NULL)
		list_ = list_->next;
	list_->next = (t_list *) malloc(sizeof(t_list));
	list_->next->data = i;
	list_->next->next = NULL;
	return (new);
}

int	get_index(t_list *list, int target)
{
	int	index;

	index = 0;
	while (list != NULL)
	{
		if (list->data == target)
		{
			return (index);
		}
		list = list->next;
		index++;
	}
	return (-1);
}
