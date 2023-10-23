/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:11:18 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/16 16:00:43 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";

    // Imposta tutti i byte di str a 'A' utilizzando ft_memset
    ft_memset(str, 'A', 11);

    printf("%s\n", str); // Stampa "AAAAAAAAAAAAA"

    return 0;
}*/
