/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:27:19 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/02 11:37:34 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*prep_mem(t_data *lst, int len)
{
	lst = malloc(sizeof(t_data) * 1);
	if (!lst)
		return (0);
	lst->a_stack = malloc(sizeof(int) * len);
	if (!lst->a_stack)
	{
		free(lst);
		return (0);
	}
	lst->b_stack = malloc(sizeof(int) * len);
	if (!lst->b_stack)
	{
		free(lst->a_stack);
		free(lst);
		return (0);
	}
	return (lst);
}

void	set_free(t_data *lst, int argc, char **argv)
{
	if (lst->b_stack)
		free(lst->b_stack);
	if (lst->a_stack)
		free(lst->a_stack);
	if (lst)
		free(lst);
	if (argc == 2)
		free_ptr(argv);
	return ;
}
