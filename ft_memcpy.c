/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:52:13 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 15:17:50 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dest[50]; // Un buffer di destinazione sufficientemente grande
    size_t n;
	printf("src: %s\n", src);
	ft_bzero(dest, 50);
    for (n = 0; n <= 50; n++) {
        // Copia n byte da src a dest
        ft_memcpy(dest, src, n);

        // Stampa il risultato
        printf("Copia di %zu byte: \"%s\"\n", n, dest);
    }

    return 0;
}
*/
/*
int main()
{
	printf("madonna troia");
	printf("%s", (char *)ft_memcpy("ciao", "ciao", 3));
}
*/
