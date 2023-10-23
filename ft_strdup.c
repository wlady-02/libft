/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:04:02 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/18 14:48:27 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main()
{
    const char *str = "Hello, World!";

    char *result_ft_strdup = ft_strdup(str);
    char *result_strdup = strdup(str);

    if (result_ft_strdup && result_strdup)
    {
        printf("Risultato di ft_strdup: %s\n", result_ft_strdup);
        printf("Risultato di strdup: %s\n", result_strdup);

        // Verifica se le due copie di stringa sono identiche
        if (strcmp(result_ft_strdup, result_strdup) == 0)
        {
            printf("Le copie sono uguali.\n");
        }
        else
        {
            printf("Le copie sono diverse.\n");
        }

        // Liberare la memoria allocata
        free(result_ft_strdup);
        free(result_strdup);
    }
    else
    {
        printf("Allocazione di memoria fallita.\n");
    }

    return 0;
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;
	if (!(str_dup = ft_strdup(str)))
			ft_print_result("NULL");
	else
		ft_print_result(str_dup);
	if (str_dup == str)
		ft_print_result("\nstr_dup's adress == str's adress");
}
*/
/*
int main()
{
	char * s = ft_strdup((char*)"coucou");
	printf("%zu %lu", ft_strlen(s) ,ft_strlen("coucou") + 1);
}*/
