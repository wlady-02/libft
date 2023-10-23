/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:54:48 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 10:57:52 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int main() {
    int fd = 1; // 1 rappresenta stdout (il terminale)
    char *message = "Ciao, mondo!";

    ft_putstr_fd(message, fd);

    return 0;
}
*/
