/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:12:38 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 15:31:04 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if (((unsigned const char *)s1)[i] != ((unsigned const char *)s2)[i])
            return (((unsigned const char *)s1)[i] - ((unsigned const char *)s2)[i]);
        i++;
    }
    return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main(int ac, char **av)
{
    printf("ft : %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
    printf("og : %d", memcmp(av[1], av[2], atoi(av[3])));
}*/