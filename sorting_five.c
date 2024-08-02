/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:25:51 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 12:59:21 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_min(t_data *lst)
{
	int	i;

	i = 1;
	lst->min = lst->a_stack[0];
	while (i < lst->a_leng)
	{
		if (lst->a_stack[i] < lst->min)
			lst->min = lst->a_stack[i];
		i++;
	}
	return ;
}

void	min_to_top(t_data *lst)
{
	if (lst->min == lst->a_stack[0])
		return ;
	if (lst->min == lst->a_stack[1] || lst->min == lst->a_stack[2])
	{
		rotate(lst->a_stack, lst->a_leng, "ra");
		min_to_top(lst);
	}
	else
	{
		reverse_rotate(lst->a_stack, lst->a_leng, "rra");
		min_to_top(lst);
	}
}

void	sorting_five(t_data *lst)
{
	while (lst->b_leng != 2)
	{
		get_min(lst);
		min_to_top(lst);
		push_to_b(lst);
	}
	sorting_three(lst);
	if (lst->b_stack[0] > lst->b_stack[1])
	{
		push_to_a(lst);
		push_to_a(lst);
	}
	else
	{
		rotate(lst->b_stack, lst->b_leng, "rb");
		push_to_a(lst);
		push_to_a(lst);
	}
	return ;
}
