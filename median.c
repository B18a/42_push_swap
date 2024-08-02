/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:07:58 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/01 12:33:06 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bouble_sort_for_median(int *arr, int len)
{
	int	i;
	int	temp;
	int	median;

	i = 0;
	while (i < (len - 1))
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			bouble_sort_for_median(arr, len);
		}
		i++;
	}
	return (arr[len / 2 + len % 2]);
}

static int	*ft_intcpy(int *arr, int len)
{
	int	*new;
	int	i;

	i = 0;
	new = ft_calloc(len, sizeof(int));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = arr[i];
		i++;
	}
	return (new);
}

int	find_median(int *arr, int leng)
{
	int	*copy_arr;
	int	median;

	copy_arr = ft_intcpy(arr, leng);
	median = bouble_sort_for_median(copy_arr, leng);
	if (copy_arr)
		free(copy_arr);
	return (median);
}
