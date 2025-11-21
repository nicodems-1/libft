/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:02:50 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/20 16:51:41 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*final_string;

	i = 0;
	j = 0;
	final_string = NULL;
	final_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!final_string)
		return (NULL);
	while (s1[i])
	{
		final_string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		final_string[i + j] = s2[j];
		j++;
	}
	final_string[i + j] = '\0';
	return (final_string);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("success\n");
// 		printf("%s", ft_strjoin(av[1], av[2]));
// 	}
// }