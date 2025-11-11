/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:19:10 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 11:36:17 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sbis;

	sbis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		sbis[i] = (unsigned char)c;
		i++;
	}
	return (sbis);
}
/*
#include <string.h>

int	main(int ac, char **av)
{
	printf("ft: %s\n", ft_memset(av[1], av[2][0], atoi(av[3])));
	printf("or: %s", memset(av[1], av[2][0], atoi(av[3])));
}*/