/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:03:24 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 20:16:55 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (l);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (l);
}
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	char src[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//     char dest[100];
//     char dest2[100];
//     printf("%zu ", ft_strlcpy(dest, src, 0));
//     printf("ft : %s\n", dest);
//     printf("%zu ", ft_strlcpy(dest2, src, 0));
//     printf("og : %s", dest2);
// }
