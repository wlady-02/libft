/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:12:25 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/16 16:09:33 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while (count < (size - 1) && src[count] != '\0')
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (ft_strlen(src));
}
