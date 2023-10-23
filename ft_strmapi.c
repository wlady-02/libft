/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:52:54 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/17 10:53:08 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmp;
	int		i;

	i = 0;
	strmp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!strmp)
		return (NULL);
	while (s[i] != '\0')
	{
		strmp[i] = f(i, s[i]);
		i++;
	}
	strmp[i] = '\0';
	return (strmp);
}
/*
char my_mapping_function(unsigned int index, char character) {
    // In questo esempio, convertiamo tutti i caratteri in lettere maiuscole
    if (character >= 'A' && character <= 'Z') {
        return character + 32;
    }
    return character;
}

int main() {
    char input[] = "Hello, World!";

    char *result = ft_strmapi(input, my_mapping_function);

    if (result) {
        printf("Stringa originale: %s\n", input);
        printf("Stringa modificata: %s\n", result);
        free(result);
    } else {
        printf("Error durante l'allocazione di memoria per la stringa mod.\n");
    }

    return 0;
}
*/
