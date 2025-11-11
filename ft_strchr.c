/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:38:46 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/11 12:25:00 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((unsigned char *)(&s[i]));
		i++;
	}
	return ((unsigned char*)(&s[i]));
}

int	main(void)
{
	char s[25] = "salut l'equipe";
	printf("%s", ft_strchr(s, 'l'));
	printf("%s", strchr(s, 'l')); 
}
