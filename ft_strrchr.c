/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:22:31 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 16:33:55 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;
	char	ch;

	ch = (char)c;
	tmp = (char *)s;
	i = ft_strlen(tmp);
	while (tmp[i] != ch && i > 0)
		i--;
	if (i == 0 && tmp[i] != ch)
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
	char		*str;
	char		str2[] = "bonjour";
	if (!(str = ft_strrchr(str2, 's')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
}
*/
