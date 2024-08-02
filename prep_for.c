/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_for.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:33:24 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 12:59:13 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_two_for(t_data *lst)
{
	if (lst->a_stack[0] > lst->a_stack[1])
		swap(lst->a_stack, 2, "sa");
	return ;
}

static int	case_else(t_data *lst, int size, int rev_call)
{
	lst->a_median = find_median(lst->a_stack, size);
	lst->chunk[lst->i] = size / 2 + size % 2;
	size = size - lst->chunk[lst->i];
	move_to_b(lst, rev_call);
	return (size);
}

void	prep_forward(t_data *lst, int size, int rev_call)
{
	if (lst->a_leng == 3 && !lst->b_leng)
	{
		sorting_three(lst);
		return ;
	}
	else if (lst->a_leng == 5 && !lst->b_leng && !check_sort_lst_a(lst))
	{
		sorting_five(lst);
		return ;
	}
	while (!check_sort_lst_a(lst))
	{
		if (size == 2)
			case_two_for(lst);
		else
			size = case_else(lst, size, rev_call);
	}
	lst->i--;
	while (lst->b_leng)
		prep_backward(lst, lst->chunk[lst->i]);
	return ;
}
