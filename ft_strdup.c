/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:37:18 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/12 17:59:00 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*strdup(const char *s)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc((sizeof(char) * len) + 1);
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