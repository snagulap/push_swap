/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:09:26 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/22 16:07:54 by snagulap         ###   ########.fr       */
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
	// list_a = new;
	return (new);
}

t_list	*creating_llist(t_list *list_, char **argv)
{
	int	i;
	int	num;

	i = 1;
	num = ft_atoi(argv[i]);
	i++;
	list_ = ft_lstnew(list_, num);
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		list_ = ft_addlast(list_, num);
		i++;
	}
	if (list_ == NULL)
		ft_error();
	return (list_);
}
/** adding an item to the end of the list
 * @
 * **/

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

int	ft_poplst(t_list **node)
{
	int		ret;
	t_list	*list_b;

	list_b = NULL;
	if (list_b != NULL)
		return (0);
	list_b = (*node)->next;
	ret = (*node)->data;
	free(list_b);
	*node = list_b;
	return (ret);
}
