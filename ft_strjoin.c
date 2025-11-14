/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:02:50 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/13 14:18:17 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		final_len;
	char	*final_string;

	final_len = ft_strlen(s1) + ft_strlen(s2);
	final_string = ft_calloc(sizeof(char), (final_len + 1));
	if (!final_string)
		return (NULL);
	ft_strlcpy(final_string, s1, ft_strlen(s1));
	ft_strlcpy(final_string + ft_strlen(s1), s2, ft_strlen(s2));
	final_string[final_len] = '\0';
	return (final_string);
}

// int main(int ac, char **av)
// {
//     printf("%s", ft_strjoin(av[1], av[2]));
// }