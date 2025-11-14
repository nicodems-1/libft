/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:10:00 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/14 14:16:43 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = NULL;
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len != i && s[start])
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	return (sub);
}

// #include <string.h>
// #include <stdio.h>

// int main(int ac, char **av)
// {
//     printf("%s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
// }