/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:27:04 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 09:31:52 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *sbis;

	sbis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		sbis[i] = (unsigned char)c;
		i++;
	}
	return (sbis);
}