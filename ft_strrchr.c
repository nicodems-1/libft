/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:38:46 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 22:04:13 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i])
		i++;
	if ((unsigned char)c == 0)
		return ((char *)(&s[len]));
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[25] = "abbbbbbbbbbbbbbbbbbbbbbb";
// 	printf("%s", ft_strrchr(s, 'a'));
// }