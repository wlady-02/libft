/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:11 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 11:51:54 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main() {
    // Test cases
    const char *str = "bbaaabcdf";
    int search_char = 'a';
    size_t n = 4;
    // Call ft_memchr
    void *result = ft_memchr(str, search_char, n);

    if (result != NULL) {
        printf("Character '%c'", search_char);
		printf("found at position: %s\n",(char *)result);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }
}
int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("\n\nTester: %s", (char *)ft_memchr(tab, -1, 7));
    return 0;
}

int main ()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%s", (char *)ft_memchr(s, 0, 1));
}
*/
