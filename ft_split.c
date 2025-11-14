/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:19:12 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/14 11:44:59 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// "abc | efg | hi" "|"

// abc, efg, hi

#include <stdlib.h>
#include <unistd.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
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

char	**alloc_tab(int count, char const *s, char c, char **tab)
{
	int	i;
	int	len;
	int	loc;

	loc = 0;
	i = 0;
	tab = malloc((count + 1) * sizeof(char *));
	while (loc < count)
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
		tab[loc] = malloc(sizeof(char) * len);
		tab[loc] = ft_substr(s, i, len);
		i += len;
		loc++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;

	count = count_words(s, c);
	return (alloc_tab(count, s, c, tab));
}

// int	main(int ac, char **av)
// {
// 	char c = ' ';
// 	char **tab;
// 	int count;
// 	int i;
// 	count = 0;

// 	i = 0;
// 	if (ac != 2)
// 		return (NULL);
// 	count = count_words(av[1], c) + 1;
// 	if (ac == 2)
// 		tab = ft_split(av[1], c);
// 	while (i < count)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }