/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:42:26 by snagulap          #+#    #+#             */
/*   Updated: 2023/05/21 17:24:00 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include<unistd.h>
# include<string.h>
# include<stdio.h>
# include "lst.h"

void	ft_error(void);
/// @brief 
/// @param argv 
/// @return 
int		check_duplicate(t_list *list_);
int		ft_poplst(t_list **node);

#endif
