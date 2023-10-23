/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:48:38 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/19 11:37:04 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if ((nmemb * size) > 4294967295)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}
/*
void test_ft_calloc(size_t nmemb, size_t size) {
    // Test ft_calloc
    printf("Testing ft_calloc with nmemb=%zu, size=%zu\n", nmemb, size);

    void *ptr = ft_calloc(nmemb, size);
    if (ptr == NULL) {
        printf("ft_calloc failed to allocate memory.\n");
        return;
    }

    // Assign values to the allocated memory (for demonstration)
    for (size_t i = 0; i < nmemb * size; i++) {
        ((char *)ptr)[i] = 'A' + (i % 26); // Assign letters from 'A' to 'Z'
    }

    // Print the allocated memory
    for (size_t i = 0; i < nmemb * size; i++) {
        printf("%c ", ((char *)ptr)[i]);
    }

    free(ptr); // Remember to free the allocated memory
    printf("\n\n");
}

int main() {
    // Test ft_calloc with different values of nmemb and size
    test_ft_calloc(0, sizeof(char));
    test_ft_calloc(3, sizeof(int));
    test_ft_calloc(4, sizeof(double));

    return 0;
}
*/
