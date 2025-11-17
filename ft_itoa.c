/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:09:19 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 14:05:48 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	measure(int n)
{
	int	len;
	int	temp;

	len = 1;
	temp = n;
	if (temp < 0)
		len++;
	while (temp >= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*final;
	int		temp;

	temp = n;
	i = 0;
	final = NULL;
	final = malloc(sizeof(char) * measure(n));
	if (temp < 0)
	{
		final[0] = '-';
		temp = -temp;
		i++;
	}
	while (temp >= 10)
	{
		final[i] = (temp % 10) + '0';
		temp = temp / 10;
		i++;
	}
	return (final);
}

// int main(void)
// {
//         printf("%s", ft_itoa(12));
// }