/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:18:09 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 16:39:20 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = -1;
	if (start > ft_strlen(s))
	{
		substr = malloc(sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	s += start;
	if (ft_strlen(s) <= len)
		substr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[++i] != '\0' && i < len)
		substr[i] = s[i];
	substr[i] = '\0';
	return (substr);
}
/*
int main()
{
    const char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(str, start, -4);

    if (result)
    {
		printf("SS = SubString")
        printf("SS di '%s' pos %u con len %zu: %s\n", str, start, len, result);
        free(result); // Libera la memoria allocata
    }
    else
    {
        printf("Allocazione di memoria fallita.\n");
    }

    return 0;
}
/
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
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	char *bullshit;
    if (!(strsub = ft_substr(str, 400, 20)))
        ft_print_result("NULL");
    else
    {
        bullshit = (char *)&strsub[30];
        bullshit = "FULL BULLSHIT";
        if (strsub)
            ft_print_result(strsub);
        else
            ft_print_result("rip");
    }
    if (str == strsub)
        ft_print_result("\nA new string was not returned");
    (void)bullshit;
}


int main()
{
	char * s = ft_substr("tripouille", 0, 42000);
	printf("%zu %zu", ft_strlen(s), ft_strlen(("tripouille") + 1));
}
*/
