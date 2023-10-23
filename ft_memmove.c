/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:37:23 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 14:49:07 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
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
int main() {
    char src[] = "Hello, World!";
    char dest[50]; 
    size_t n;
	printf("src: %s\n", src);
	ft_memset(dest, '\0', 50);
    for (n = 0; n <= 20; n++) {
        // Copia n byte da src a dest
        ft_memmove(dest, src, n);

        // Stampa il risultato
        printf("Copia di %zu byte: \"%s\"\n", n, dest);
    }

    return 0;
}
*/
