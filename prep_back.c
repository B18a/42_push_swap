/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:03:17 by ajehle            #+#    #+#             */
/*   Updated: 2024/01/19 11:51:07 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_two_back(t_data *lst, int size)
{
	if (lst->b_stack[1] > lst->b_stack[0])
		swap(lst->b_stack, size, "sb");
	push_to_a(lst);
	push_to_a(lst);
	lst->chunk[lst->i] = 0;
	return ;
}

static void	case_bigger_two_back(t_data *lst, int size)
{
	int	size_temp;

	lst->b_median = find_median(lst->b_stack, size);
	size_temp = lst->chunk[lst->i];
	lst->chunk[lst->i] = lst->chunk[lst->i] / 2 + lst->chunk[lst->i] % 2;
	lst->i++;
	lst->chunk[lst->i] = size_temp - lst->chunk[lst->i - 1];
	move_to_a(lst);
	if (!check_sort_lst_a(lst))
	{
		lst->i++;
		prep_forward(lst, lst->chunk[lst->i], 1);
	}
	return ;
}

void	prep_backward(t_data *lst, int size)
{
	if (size == 0 && lst->i >= 1)
		lst->i--;
	if (size == 1)
	{
		push_to_a(lst);
		lst->chunk[lst->i] = 0;
	}
	else if (size == 2)
		case_two_back(lst, size);
	else if (size > 2)
		case_bigger_two_back(lst, size);
	return ;
}
