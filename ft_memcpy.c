/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:50:52 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 14:44:22 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char    src1[5] = "hello";
	char    dest1[10] = "abcdefghij";
	char    src2[5] = "hello";
	char    dest2[10] = "abcdefghij";
	printf("ft :%s\n", ft_memcpy(dest1, src1, atoi(av[1])));
	printf("og :%s", memcpy(dest2, src2, atoi(av[1])));
}*/