/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:42:26 by snagulap          #+#    #+#             */
/*   Updated: 2023/06/12 20:29:57 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# include "lst.h"
# include <fcntl.h>
# include <limits.h>

int			ft_error(void);
int			check_duplicate(t_list *list_);
int			ft_poplst(t_list **node, int value);
t_list		*list_create(char **argv);
char		**parsing_input(char **argv);
void		get_index_1(char **list_, int nodes, t_list *list_a);
long int	ft_atoi_check(char *str);
void		sort_array(int arr[], int size);
void		sorting_3el(t_list	**list_a);
int			count_list(t_list *head);
void		sorting_5el(t_list **list_a, t_list **list_b);
int			smallest_ele(t_list **list_a);
void		ft_free(t_list *list_);
void		pushing_to_b(t_list **list_a, t_list **list_b, int value);
int			get_index(t_list *list, int target);
void		sorting_4el(t_list **list_a, t_list **list_b);
int			rotate__(t_list *list_b, int max);
void		sort_b(t_list **list_a, t_list **list_b, int nodes);
void		sort_a(t_list **list_a, t_list **list_b, int nodes);
int			is_sorted(t_list *list_a);
#endif
