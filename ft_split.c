/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:01:58 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/19 17:07:34 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	*ft_fill_matrix(char *s, char c, int *index)
{
	int		i;
	int		j;
	char	*word;

	i = *index;
	j = 0;
	while (s[i + j] != c && s[i + j] != '\0')
		j++;
	word = (char *)ft_calloc(j + 1, sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + i, j + 1);
	*index = i + j;
	return (word);
}

static void	*ft_free_matrix(char **s, int w)
{
	while (w >= 0)
	{
		free(s[w]);
		w--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**str;
	int		w;
	int		i;

	nwords = ft_count_words((char *)s, (char)c);
	str = (char **)ft_calloc(nwords + 1, sizeof(char *));
	if (!str)
		return (NULL);
	w = -1;
	i = 0;
	while (++w < nwords)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			str[w] = ft_fill_matrix((char *)s, c, &i);
			if (str[w] == NULL)
				return (ft_free_matrix(str, w));
		}
	}
	str[w] = NULL;
	return (str);
}
/*
int main()
{
	char *s = "hello!";
	//char *s = "                  olol";
	printf("'%s'\n", s);
	char **result = ft_split(s, ' ');
	for (int i = 0; result[i] != NULL; i++) {
            printf("Parola %d: %s\n", i + 1, result[i]);
            free(result[i]);
        }
}
*/
