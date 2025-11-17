/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niverdie <niverdie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:27:04 by niverdie          #+#    #+#             */
/*   Updated: 2025/11/17 19:54:11 by niverdie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	tmp_src = (char *)src;
	tmp_dest = (char *)dest;
	if (tmp_dest > tmp_src)
	{
		while (n-- != 0)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return(dest);
}
// int	main(void)
// {
// 	char *str = "salut toi";
// 	char *dest;
// 	ft_memmove(dest, str, 12);
// }