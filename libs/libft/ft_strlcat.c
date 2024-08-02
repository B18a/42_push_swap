/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:43:09 by ajehle            #+#    #+#             */
/*   Updated: 2023/10/13 10:55:46 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	ret;

	counter = 0;
	while (*dst && counter < dstsize)
	{
		dst++;
		counter++;
	}
	ret = ft_strlcpy(dst, src, dstsize - counter);
	return (ret + counter);
}
