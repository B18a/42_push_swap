/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:17:11 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/02 11:47:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_for_nbrs(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_for_dups(int *stack, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < len)
	{
		while (j < len)
		{
			if (stack[i] == stack[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	write_to_stack(t_data *lst, char **argv, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!check_for_nbrs(argv[i]))
		{
			set_free(lst, 0, argv);
			return (1);
		}
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
		{
			set_free(lst, 0, argv);
			return (1);
		}
		lst->a_stack[i] = ft_atol(argv[i]);
		i++;
	}
	if (!check_for_dups(lst->a_stack, lst->a_leng))
	{
		set_free(lst, 0, argv);
		return (1);
	}
	return (0);
}

static void	prep_lst(t_data *lst, int len)
{
	lst->a_leng = len;
	lst->b_leng = 0;
	lst->i = 0;
	return ;
}

int	parse_input(int argc, char **argv)
{
	t_data	*lst;
	int		len;

	lst = NULL;
	len = argc - 1;
	if (len <= 0)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		len = 0;
		while (argv[len])
			len++;
	}
	else
		argv++;
	lst = prep_mem(lst, len);
	if (!lst)
		return (0);
	prep_lst(lst, len);
	if (write_to_stack(lst, argv, len))
		return (1);
	prep_forward(lst, lst->a_leng, 0);
	set_free(lst, argc, argv);
	return (0);
}
