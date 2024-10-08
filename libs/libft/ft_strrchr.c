/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:24:30 by ajehle            #+#    #+#             */
/*   Updated: 2023/11/16 18:16:24 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*ret;

	ret = NULL;
	if ((char)c == '\0')
		return (&s[ft_strlen(s)]);
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = s;
		s++;
	}
	if (!c)
		ret = s;
	return (ret);
}
