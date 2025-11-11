/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:18:27 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 09:32:45 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sbis;

	sbis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		sbis[i] = '\0';
		i++;
	}
	return (sbis);
}
/*
#include <bsd/string.h>

int	main(int ac, char **av)
{
	int i = 0;
	char *tableau  = ft_bzero(av[1], atoi(av[2]));
	while (i != 5)
	{
		printf("%d\n", tableau[i]);
		i++;
	}
	//printf("or: %s", (char *)bzero(av[1], atoi(av[2])));
}*/