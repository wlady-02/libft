/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:35:05 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/22 10:44:33 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
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

	t_list *element4 = (t_list *)malloc(sizeof(t_list));
    element4->content = "Element 4";
    element4->next = NULL;


    // Aggiungi gli elementi alla lista
    head = element1;
    element1->next = element2;
    element2->next = element3;
	element3->next = element4;

    // Calcola la dimensione della lista utilizzando ft_lstsize
    int size = ft_lstsize(head);

    // Stampa la dimensione della lista
    printf("Dimensione della lista: %d\n", size);

    // Dealloca la memoria quando non ne hai più bisogno
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
*/
