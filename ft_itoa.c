/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:09:19 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 18:35:24 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// static void	reverse(char *string)
// {
// 	int		i;
// 	char	temp;
// 	int		len;

// 	len = ft_strlen(string);
// 	i = 0;
// 	if (string[0] == '-')
// 	{
// 		i++;
// 		len++;
// 	}
// 	while (i != len / 2)
// 	{
// 		temp = string[i];
// 		string[i] = string[len - 1 - i];
// 		string[len - 1 - i] = temp;
// 		i++;
// 	}
// }

static int	measure(int n)
{
	int			len;
	long int	temp;

	len = 0;
	temp = n;
	if (temp <= 0)
		len++;
	while (temp != 0)
	{
		len++;
		temp = temp / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	temp;
	int		i;
	int		len;
	char	*final;

	temp = n;
	len = measure(n);
	i = len - 1;
	final = malloc(sizeof(char) * len + 1);
	if (!final)
		return (NULL);
	final[0] = '0';
	if (n < 0)
		temp = -temp;
	while (temp != 0)
	{
		final[i--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (n < 0)
		final[0] = '-';
	final[len] = 0;
	return (final);
}

// int	main(int ac, char **av)
// {
// 	printf("%s", ft_itoa(ft_atoi(av[1])));
// }