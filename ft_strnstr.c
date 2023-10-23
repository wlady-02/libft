/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:10:30 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 13:03:47 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)big;
	s2 = (char *)little;
	if (!*s2)
		return (s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == *s2)
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i + j] && (i + j) < len)
				j++;
			if (!s2[j])
				return (s1 + i);
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
    const char *big = "Hello, World!";
    const char *little = "c";
    size_t len = strlen(big);
    char *result = ft_strnstr(big, little, len);

    if (result != NULL)
    {
        printf("Sottostringa trovata: %s\n", result);
    }
    else
    {
        printf("Sottostringa non trovata.\n");
    }

    return 0;
	printf("s1[%zu + %zu] '%c' s2 '%c'\n", i, j,  s1[i+j], s2[j]);

}

//
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int main()
{
	const char *str;
	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)))
        ft_print_result("NULL");
    else
        ft_print_result(str);
}
//

int main()
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	//char * empty = (char*)"";
	printf("%s",ft_strnstr(haystack, "aaabc", 5));

}

*/
