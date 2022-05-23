/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:11:22 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 10:51:26 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstr;
	char	*srcr;

	dstr = (char *)dst;
	srcr = (char *)src;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			dstr[len] = srcr[len];
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*dstr++ = *srcr++;
		}
		return (dst);
	}
}

// int main()
// {
//     char s[] = "mane";
//     char d[] = "sdfg";
//     printf("n: %s\n", ft_memmove(&d, &s, 4));
//     return (0);
// }
