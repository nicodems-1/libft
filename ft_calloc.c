/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:04:26 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/14 11:44:13 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	ptr = NULL;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ft_bzero(ptr, nmemb));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *ptr = ft_calloc(100, sizeof(int));
//     printf("%s", ptr);
// 	free(ptr);
// }