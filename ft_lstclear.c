/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:20:38 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/23 09:37:22 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*current;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current->next;
		del(current->content);
		free(current);
		current = tmp;
	}
	*lst = NULL;
}
/*
void free_element(void *data)
{
    free(data);
}

void print_list(t_list *head) {
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}

int main()
{
    t_list *my_list = NULL;

    // Creiamo alcuni elementi di esempio
    char *data1 = strdup("Element 1");
    char *data2 = strdup("Element 2");
    char *data3 = strdup("Element 3");

    // Aggiungiamo gli elementi alla lista
    my_list = (t_list *)malloc(sizeof(t_list));
    my_list->content = data1;
    my_list->next = (t_list *)malloc(sizeof(t_list));
    my_list->next->content = data2;
    my_list->next->next = (t_list *)malloc(sizeof(t_list));
    my_list->next->next->content = data3;
    my_list->next->next->next = NULL;

	printf("Lista prima dell'eliminazione:\n");
    print_list(my_list);
    // Chiamiamo ft_lstclear per eliminare la lista
    ft_lstclear(&my_list, free_element);

    if (my_list == NULL)
    {
        printf("La lista è stata eliminata con successo!\n");
    }

    return 0;
}*/
