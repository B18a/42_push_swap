/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:17:22 by ajehle            #+#    #+#             */
/*   Updated: 2024/01/11 14:42:32 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_data *lst)
{
	if (lst->b_leng == 0)
		return ;
	all_one_down(lst->a_stack, lst->a_leng);
	lst->a_stack[0] = lst->b_stack[0];
	lst->a_leng++;
	all_one_up(lst->b_stack, lst->b_leng);
	lst->b_leng--;
	ft_printf("pa\n");
	return ;
}

void	push_to_b(t_data *lst)
{
	if (lst->a_leng == 0)
		return ;
	all_one_down(lst->b_stack, lst->b_leng);
	lst->b_stack[0] = lst->a_stack[0];
	lst->b_leng++;
	all_one_up(lst->a_stack, lst->a_leng);
	lst->a_leng--;
	ft_printf("pb\n");
	return ;
}
