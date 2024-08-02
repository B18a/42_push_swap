/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:00:01 by ajehle            #+#    #+#             */
/*   Updated: 2024/01/18 12:27:07 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_lst_a(t_data *lst)
{
	int	i;

	i = 0;
	while (i < lst->a_leng - 1)
	{
		if (lst->a_stack[i] > lst->a_stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_sort_lst_b(t_data *lst, int chunksize)
{
	int	i;

	i = 0;
	while (i < chunksize - 1)
	{
		if (lst->b_stack[i] < lst->b_stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
