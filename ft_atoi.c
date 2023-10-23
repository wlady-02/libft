/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:29:08 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 14:29:09 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10;
		num += nptr[i] - '0';
		i++;
	}
	return (num * sign);
}
/*
int main()
{
    const char *str = "   \n\t-a123a45";

    int result_ft_atoi = ft_atoi(str);
    int result_atoi = atoi(str);

    printf("Conversione di '%s' con ft_atoi: %d\n", str, result_ft_atoi);
    printf("Conversione di '%s' con atoi: %d\n", str, result_atoi);

    if (result_ft_atoi == result_atoi)
    {
        printf("Le conversioni sono uguali.\n");
    }
    else
    {
        printf("Le conversioni sono diverse.\n");
    }

    return 0;
}
/
int main()
{
	printf("%i", ft_atoi("546:5"));
}
*/
