/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:37:18 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/20 15:56:59 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (i <= len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main(int ac, char **av)
{
    printf("%s", strdup(av[1]));
}*/