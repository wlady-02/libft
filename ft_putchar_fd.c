/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:31:23 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 12:02:57 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main() {
    char character = 'A'; // Il carattere da stampare
    int file_descriptor = 1; // 1 rappresenta stdout (il terminale)

    ft_putchar_fd(character, file_descriptor);

    return 0;
}
*/
