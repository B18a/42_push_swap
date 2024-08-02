/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:58:51 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 12:00:37 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_data *lst, int rev_call)
{
	int	i;
	int	rot;

	i = 0;
	rot = 0;
	while (i < lst->chunk[lst->i])
	{
		if (lst->a_stack[0] < lst->a_median)
		{
			push_to_b(lst);
			i++;
		}
		else
		{
			rotate(lst->a_stack, lst->a_leng, "ra");
			rot++;
		}
	}
	while (rot && (rev_call != 0))
	{
		reverse_rotate(lst->a_stack, lst->a_leng, "rra");
		rot--;
	}
	lst->i++;
	return ;
}

void	move_to_a(t_data *lst)
{
	int	i;
	int	rot;

	i = 0;
	rot = 0;
	while (i < lst->chunk[lst->i])
	{
		if (lst->b_stack[0] >= lst->b_median)
		{
			push_to_a(lst);
			i++;
		}
		else
		{
			rotate(lst->b_stack, lst->b_leng, "rb");
			rot++;
		}
	}
	while (rot && lst->i != 0)
	{
		reverse_rotate(lst->b_stack, lst->b_leng, "rrb");
		rot--;
	}
	lst->i--;
	return ;
}
