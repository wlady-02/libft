/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:16:19 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 17:45:02 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	l1;
	size_t	l2;
	size_t	tot_l;
	char	*strj;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	tot_l = l1 + l2 + 1;
	strj = (char *)malloc(sizeof(char) * tot_l);
	if (!strj)
		return (NULL);
	strj[0] = '\0';
	ft_strlcat(strj, s1, l1 + 1);
	ft_strlcat(strj, s2, tot_l);
	strj[tot_l] = '\0';
	return (strj);
}
/*
int main() {
    char *string1 = "ciao ";
    char *string2 = "mondo!";
    char *result = ft_strjoin(string1, string2);

    if (result) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
/*
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
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;
	if (!(strjoin = ft_strjoin(s1, s2)))
			ft_print_result("NULL");
		else
			ft_print_result(strjoin);
		if (strjoin == s1 || strjoin == s2)
			ft_print_result("\nA new string was not returned");
}
*/
