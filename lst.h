/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:21:33 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/08 12:42:06 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

typedef struct lst
{
	int			data;
	int			index;
	struct lst	*next;

}	t_list;

t_list	*ft_lstnew(t_list *list_a, int data);
t_list	*ft_addlast(t_list *new, int i);
int		ft_poplst(t_list **node, int value);
t_list	*creating_llist(t_list *list_, char **argv);
void	print_list(t_list *head);
t_list	*sorting_list(t_list *list_);
void	sa(t_list **current);
void	swap_a(t_list	**list_);
void	sb(t_list **list_);
void	swap_b(t_list	**list_);
void	swap_ss(t_list	**list_a, t_list **list_b);
void	push_a(t_list **list_a, t_list **list_b);
void	push_b(t_list **list_a, t_list **list_b);
void	rotate_a(t_list **list_a);
void	rotate_b(t_list **list_b);
void	rotate_a_b(t_list **list_a, t_list **list_b);
void	reverse_ra(t_list **list_a);
void	reverse_rb(t_list **list_b);

#endif
