/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:17:24 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 10:43:16 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *stack, int len, char *str)
{
	int	first;

	if (!stack || len < 2)
		return ;
	first = stack[0];
	all_one_up(stack, len);
	stack[len - 1] = first;
	if (str != NULL)
		ft_printf("%s\n", str);
	return ;
}

void	rotate_rr(t_data *lst)
{
	rotate(lst->a_stack, lst->a_leng, NULL);
	rotate(lst->b_stack, lst->b_leng, NULL);
	ft_printf("rr\n");
	return ;
}
