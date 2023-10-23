/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:03:19 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 12:01:51 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dim(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			d;
	long int	num;
	char		*str;

	d = ft_dim(n);
	str = (char *)ft_calloc((d + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -(long int)n;
	}
	else
		num = (long int)n;
	if (num == 0)
		str[0] = '0';
	str[d] = '\0';
	while (num != 0)
	{
		str[d - 1] = (num % 10) + '0';
		num /= 10;
		d--;
	}
	return (str);
}
/*
int main() {
    int number = 0; // Sostituisci con il tuo numero intero

    // Test con la tua funzione ft_itoa
    char *str1 = ft_itoa(number);

    if (str1) {
        printf("Risultato con ft_itoa: %s\n", str1);
        free(str1);
    } else {
        printf("Errore con ft_itoa.\n");
    }

    // Test con snprintf (simile a itoa)
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%d", number);

    printf("Risultato con snprintf: %s\n", buffer);

    return 0;
}
*/
