/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:15:01 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/22 10:25:45 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main() {
    // Creazione di un nuovo elemento con contenuto "Hello, World!"
    char *str = "Hello, World!";
    t_list *newElement = ft_lstnew(str);

    if (newElement) {
        printf("elmento creato %s\n", (char *)newElement->content);
    } else {
        printf("Failed to create a new element.\n");
    }

    // Assicurati di deallocare la memoria quando non ne hai più bisogno
    if (newElement) {
        free(newElement);
    }

    return 0;
}
*/
