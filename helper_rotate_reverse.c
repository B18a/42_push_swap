/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_rotate_reverse.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:17:24 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 10:43:50 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int len, char *str)
{
	int	last;

	if (!stack || len < 2)
		return ;
	last = stack[len - 1];
	all_one_down(stack, len);
	stack[0] = last;
	if (str != NULL)
		ft_printf("%s\n", str);
	return ;
}

void	reverse_rotate_rr(t_data *lst)
{
	reverse_rotate(lst->a_stack, lst->a_leng, NULL);
	reverse_rotate(lst->b_stack, lst->b_leng, NULL);
	ft_printf("rrr\n");
	return ;
}
