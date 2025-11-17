/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:38:46 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 21:53:49 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned char)c == 0)
		return ((char *)(&s[len]));
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&s[i]));
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	char	s[10] = "salut";
// 	printf("%s\n", ft_strchr(s, ' '));
// 	printf("%s", strchr(s, ' '));
// }
