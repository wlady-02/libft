/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:44:39 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/22 10:52:35 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
/*
int main() {
    t_list *head = NULL;  // Inizializza una lista vuota

    // Crea nuovi elementi e li aggiunge alla lista
    t_list *element1 = (t_list *)malloc(sizeof(t_list));
    element1->content = "Element 1";
    element1->next = NULL;

    t_list *element2 = (t_list *)malloc(sizeof(t_list));
    element2->content = "Element 2";
    element2->next = NULL;

    t_list *element3 = (t_list *)malloc(sizeof(t_list));
    element3->content = "Element 3";
    element3->next = NULL;

    // Aggiungi gli elementi alla lista
    head = element1;
    element1->next = element2;
    element2->next = element3;

    // Trova l'ultimo elemento della lista utilizzando ft_lstlast
    t_list *lastElement = ft_lstlast(head);

    // Stampa il contenuto dell'ultimo elemento
    printf("ultimo elemento: %s\n", (char *)lastElement->content);

    // Dealloca la memoria quando non ne hai più bisogno
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
*/
