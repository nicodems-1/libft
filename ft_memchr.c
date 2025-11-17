/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:38:46 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 16:34:32 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sbis;

	sbis = (unsigned char *)s;
	i = 0;
	while (sbis[i] && i < n)
	{
		if (sbis[i] == (unsigned char)c)
			return ((void *)&sbis[i]);
		i++;
	}
	return ((void *) NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char s[50] = "salut le boss ca va";
    printf("ft : %p\n", ft_memchr(s, 's', 20));
    printf("og : %p", memchr(s, 's', 20));
}*/