/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:24:52 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 17:45:06 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	count = 0;
	d_len = ft_strlen(dst);
	i = d_len;
	s_len = ft_strlen(src);
	if (size <= 0)
		return (s_len + size);
	while (i < (size - 1) && src[count] != '\0')
	{
		dst[i] = src[count];
		i++;
		count++;
	}
	dst[i] = '\0';
	if (size < d_len)
		return (s_len + size);
	else
		return (d_len + s_len);
}
/*
void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main() {
	
	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 26)))
		return (0);
	dest[0] = '\0';
   	printf("cat1: %zu\n",ft_strlcat(dest, "lorem ipsum", 12));
    //const char *source = "world!";

    printf("cat2: %zu\n", ft_strlcat(dest, "dolor sit amet", 26));
	
    //printf("Stringa di origine: %s\n", source);
    //printf("Stringa di destinazione: %s\n", destination);
	//printf("Lunghezza totale della stringa concatenata: %zu\n", result);
	write(1, "\n", 1);
	write(1, dest, 26);
    return 0;
	printf("size: %zu s_len: %zu i: %zu\n", size, s_len, i);

}
*/
