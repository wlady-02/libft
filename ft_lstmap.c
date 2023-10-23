/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:38:47 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/23 10:14:35 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*curr;
	t_list	*new;
	void	*result;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	curr = lst;
	list = NULL;
	new = NULL;
	while (curr)
	{
		result = f(curr->content);
		new = ft_lstnew(result);
		if (!new)
		{
			del(result);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		curr = curr->next;
	}
	return (list);
}
/*
void free_element(void *data)
{
    free(data);
}

// Funzione di esempio da applicare agli elementi
void *transform_element(void *data)
{
    char *str = (char *)data;
    char *new_str = (char *)malloc(strlen(str) + 3);
    sprintf(new_str, "%s00", str);
    return new_str;
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

    // Applichiamo la funzione ft_lstmap per creare una nuova lista
    t_list *new_list = ft_lstmap(my_list, transform_element, free_element);

    // Stampa la nuova lista
    t_list *current = new_list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Elimina le liste
    //ft_lstclear(&my_list, free_element);
    //ft_lstclear(&new_list, free_element);

    return 0;
}
*/
