/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:17:19 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 10:43:03 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *stack, int len, char *str)
{
	long	nbr;

	if (!stack || len < 2)
		return ;
	nbr = stack[0];
	stack[0] = stack[1];
	stack[1] = nbr;
	if (str != NULL)
		ft_printf("%s\n", str);
	return ;
}

void	swap_ss(t_data *lst)
{
	swap(lst->a_stack, lst->a_leng, NULL);
	swap(lst->b_stack, lst->b_leng, NULL);
	ft_printf("ss\n");
	return ;
}
