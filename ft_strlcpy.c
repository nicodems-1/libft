/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:03:24 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 09:31:21 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(src);
	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (l);
}
/*
int	main(void)
{
    char src[6]= "salut";
    char dest[0];
    char dest2[0];
    printf("%d ", ft_strlcpy(dest, src, 3));
    printf("ft : %s\n", dest);
    printf("%d ", ft_strlcpy(dest2, src, 3));
    printf("og : %s", dest2);
}*/
