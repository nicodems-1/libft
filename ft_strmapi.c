/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:05:41 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/18 13:36:53 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_string || !s || !f)
		return (NULL);
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// char   new_toupper(unsigned int i, char s)
// {
//     if (' ' != s)
//     s -= 32;
//     return(s);
// }

// int     main(void)
// {
//     char *tutu = "salut commentcava";
//     ft_strmapi(tutu, &new_toupper);
//     printf("%s",  ft_strmapi(tutu, &new_toupper));
// }