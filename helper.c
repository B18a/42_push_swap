/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:21:57 by ajehle            #+#    #+#             */
/*   Updated: 2024/01/18 13:53:21 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	nbr;
	long	pre;

	nbr = 0;
	pre = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pre = pre * (-1);
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		nbr = nbr * 10;
		nbr = nbr + (*str - 48);
		str++;
	}
	return (pre * nbr);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	all_one_down(int *stack, int len)
{
	while (len > 0)
	{
		stack[len] = stack[len - 1];
		len--;
	}
	return ;
}

void	all_one_up(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	return ;
}
