/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:42:21 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/14 17:40:18 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(src);
	l2 = ft_strlen(dst);
	i = 0;
	i2 = 0;
	while (dst[i])
	{
		i++;
	}
	while (src[i2] && i < size)
	{
		dst[i] = src[i2];
		i++;
		i2++;
	}
	if (size < l1 + l2)
		return (l1 + size);
	else
		return (l1 + l2);
}

// int	main(void)
// {
// 	char	dest[10] = "salut";
// 	char	dest2[10] = "salut";
// 	char	src[5] = "toi";
// 	char	src2[5] = "toi";

// 	printf("ft : %zu\n", ft_strlcat(dest, src, 0));
// 	printf("ft : %s\n", dest);
// 	printf("og : %zu\n", strlcat(dest2, src2, 0));
// 	printf("og : %s\n", dest2);
// }
