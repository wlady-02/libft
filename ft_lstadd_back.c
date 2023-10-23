/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:55:45 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/22 11:31:19 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
//new->next = NULL;
void print_list(t_list *head) {
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}

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

    // Aggiungi gli elementi alla lista utilizzando ft_lstadd_back
    ft_lstadd_back(&head, element3);
    ft_lstadd_back(&head, element2);
    ft_lstadd_back(&head, element1);

    // Stampa la lista
    printf("Lista dopo l'aggiunta di elementi:\n");
    print_list(head);

    // Dealloca la memoria quando non ne hai più bisogno
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
*/
