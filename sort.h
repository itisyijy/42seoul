/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:36:56 by jeongyle          #+#    #+#             */
/*   Updated: 2023/01/12 17:07:41 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "deque.h"

t_node	*find_min(t_deque *deque);
t_node	*find_max(t_deque *deque);
int		find_onethird(t_deque *deque);
int		find_twothird(t_deque *deque);

int		check_partition(t_deque *a, int twothird);
void	partition(t_deque *a, t_deque *b);

int		already_sorted(t_deque *deque);

#endif