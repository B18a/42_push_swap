/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:57:28 by ajehle            #+#    #+#             */
/*   Updated: 2023/10/20 19:10:14 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destin;
	char	*source;
	size_t	counter;

	destin = (char *)dst;
	source = (char *)src;
	counter = 0;
	if (!dst && !src)
		return (NULL);
	while (counter < n)
	{
		destin[counter] = source[counter];
		counter++;
	}
	return (dst);
}
