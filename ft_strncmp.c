/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:04 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 10:29:29 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(int ac, char **av)
{
	//printf("[%zu] s1 '%c'(%i) s2 '%c'(%i) \n", i, s1[i], s1[i], s2[i], s2[i]);
	(void)ac;
	(void)av;
	printf("Risultato: %d\n", ft_strncmp("test\200","test\0", 6));
	//printf("risultato:%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
}
*/
