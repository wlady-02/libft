/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:08:16 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 11:32:47 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_special(long n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		arr[12];
	int		i;
	long	num;

	i = 0;
	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	if (ft_is_special(num, fd))
	{
		return ;
	}
	while (num > 0)
	{
		arr[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (--i >= 0)
	{
		write(fd, &arr[i], 1);
	}
}
/*
int main() {
    int fd = 1; // 1 rappresenta stdout (il terminale)
    int number = -2147483648; // Sostituisci con il numero che vuoi stampare

    ft_putnbr_fd(number, fd);
    write(fd, "\n", 1); // Aggiungi una nuova riga per separare l'output

    return 0;
}
*/
