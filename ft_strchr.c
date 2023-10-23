/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:59:12 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 16:33:58 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	ch;

	ch = (char)c;
	tmp = (char *)s;
	i = 0;
	while (tmp[i] != ch && tmp[i] != '\0')
		i++;
	if (tmp[i] == '\0' && tmp[i] != ch)
		return (NULL);
	return (tmp + i);
}
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
	char s[] = "tripouille";
	printf("\n%c\n", 't' + 256);
	if (!(ft_strchr(s, 't' +  256)))
			ft_print_result("NULL");
		else
			ft_print_result(s);
}
*/
