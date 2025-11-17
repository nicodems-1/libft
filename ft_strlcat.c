/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:42:21 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 21:42:16 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if(size == 0)
		return(ft_strlen(src));
	while (dst[i] != 0 && i < size)
		i++;
	if (i < size)
	{
		while (src[j] && i+j < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
	}
	return (ft_strlen(src) + i);
}
// int	main(void)
// {
// 	char	dest[2] = "a";
// 	char	dest2[2] = "a";
// 	char	src[4] = "toi\0";
// 	char	src2[4] = "toi\0";
	
// 	printf("%s %zu \n", dest, ft_strlen(dest));
// 	printf("ft : %zu\n", ft_strlcat(dest, src, 10));
// 	printf("ft : %s\n", dest);
// 	printf("og : %zu\n", strlcat(dest2, src2, 10));
// 	printf("og : %s\n", dest2);
// }
