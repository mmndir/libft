/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:18:52 by mndir             #+#    #+#             */
/*   Updated: 2022/05/16 15:12:43 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	sd;
	size_t	sc;

	sc = ft_strlen(src);
	sd = ft_strlen(dst);
	i = 0;
	j = sd;
	if (sd < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && sd + i < dstsize - 1)
		{	
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (sd >= dstsize)
	{
		sd = dstsize;
	}
	return (sd + sc);
}
// int main()
//     printf("%zu", ft_strlcat(n, m, 4));
// }