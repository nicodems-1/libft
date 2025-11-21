/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:19:12 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/21 15:30:31 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != 0 && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**free_tab(int loc, char **tab)
{
	while (loc >= 0)
	{
		if (tab[loc])
			free(tab[loc]);
		loc--;
	}
	free(tab);
	return (NULL);
}

static char	**alloc_tab(int i, char const *s, char c, char **tab)
{
	int	len;
	int	loc;

	loc = -1;
	i = 0;
	tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (++loc < count_words(s, c))
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] != c)
		{
			len++;
			if (s[i + len] == 0)
				break ;
		}
		tab[loc] = ft_substr(s, i, len);
		if (!tab[loc])
			return (free_tab(loc, tab));
		i += len;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;

	tab = NULL;
	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
	{
		tab = ft_calloc(1, sizeof(char *));
		if (!tab)
			return (NULL);
		return (tab);
	}
	count = count_words(s, c);
	return (alloc_tab(0, s, c, tab));
}
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	char c = 'z';
// 	char **tab;
// 	int count;
// 	int i;
// 	count = 0;

// 	i = 0;
// 	if (ac != 2)
// 		return (0);
// 	count = count_words(av[1], c) + 1;
// 	if (ac == 2)
// 	{
// 		tab = ft_split(av[1], c);
// 		if (!tab)
// 			return (0);
// 	}
// 	while (i < 3)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }