/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:37:12 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 11:49:47 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && (s1[i] || s2[i]))
    {
        if (s1[i] != s2[i])
            return(s1[i]-s2[i]);
        i++;
    }
    return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main(int ac, char **av)
{
    printf("ft : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
    printf("og : %d", strncmp(av[1], av[2], atoi(av[3])));
}*/