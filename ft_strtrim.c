/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:30:13 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 13:33:32 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*final_string;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strchr(set, s1[end]) != NULL)
		end--;
	end++;
	final_string = ft_substr(s1, start, end - start);
	return (final_string);
}
// int main(int ac, char **av)
// {
//     if (ac == 3)
//         printf("%s", ft_strtrim(av[1], av[2]));
// }