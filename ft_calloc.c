/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:04:26 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/12 17:33:53 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sbis;

	sbis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		sbis[i] = '1';
		i++;
	}
	return (sbis);
}

void *calloc(size_t nmemb, size_t size)
{
    unsigned char *ptr;

    ptr = malloc(nmemb * size);
    return (ft_bzero(ptr, nmemb));
}
#include <stdio.h>
int main(void)
{
    printf("%s", calloc(100, 10));
}