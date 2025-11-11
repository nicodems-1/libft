/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:33:04 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 17:53:19 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	void	*null;
	int		i1;
	int		i2;

	null = 0;
	i1 = 0;
	if (little[0] == 0)
		return ((char *)&big[0]);
	while (big[i1])
	{
		i2 = 0;
		while (big[i1 + i2] == little[i2] && little[i2])
			i2++;
		if (i1 + i2 > len)
			return (null);
		if (little[i2] == 0)
			return ((char *)(&big[i1]));
		i1++;
	}
	return (null);
}

/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

 int    main(int ac, char **av)
 {
	printf("og : %s\n", strnstr(av[1], av[2], atoi(av[3])));
	printf("ft : %s", ft_strnstr(av[1], av[2], atoi(av[3])));
 }*/
