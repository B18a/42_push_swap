/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:10:59 by ajehle            #+#    #+#             */
/*   Updated: 2024/01/18 12:37:22 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_three(t_data *lst)
{
	int	top;
	int	mid;
	int	bot;

	top = lst->a_stack[0];
	mid = lst->a_stack[1];
	bot = lst->a_stack[2];
	if (top > mid && top < bot && mid < bot)
		swap(lst->a_stack, lst->a_leng, "sa");
	else if (top > mid && top > bot && mid > bot)
	{
		swap(lst->a_stack, lst->a_leng, "sa");
		reverse_rotate(lst->a_stack, lst->a_leng, "rra");
	}
	else if (top > mid && top > bot && mid < bot)
		rotate(lst->a_stack, lst->a_leng, "ra");
	else if (top < mid && top < bot && mid > bot)
	{
		swap(lst->a_stack, lst->a_leng, "sa");
		rotate(lst->a_stack, lst->a_leng, "ra");
	}
	else if (top < mid && top > bot && mid > bot)
		reverse_rotate(lst->a_stack, lst->a_leng, "rra");
	return ;
}
