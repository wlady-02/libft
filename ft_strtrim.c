/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:28:43 by dwilun            #+#    #+#             */
/*   Updated: 2023/10/19 12:43:41 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchr(char const *s, char const c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		count;
	char	*strt;

	start = 0;
	while (s1[start] != '\0' && ft_checkchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_checkchr(set, s1[end]))
		end--;
	strt = (char *)malloc(sizeof(char) * (end - start) + 2);
	if (!strt)
		return (NULL);
	count = 0;
	while (start <= end)
	{
		strt[count] = s1[start];
		start++;
		count++;
	}
	strt[count] = '\0';
	return (strt);
}
/*
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
	//printf("ciao");
	char	*strtrim;
	char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
}
*/
/*
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}
*/
