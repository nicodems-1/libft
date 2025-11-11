/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:38:46 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 13:35:26 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i--;
	}
	return ((char *)(&s[i]));
}
/*
int	main(void)
{
	char s[25] = "salut l'equipe";
	printf("%s", ft_strrchr(s, 'e'));
}*/