/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:14:03 by mndir             #+#    #+#             */
/*   Updated: 2022/05/21 20:06:06 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*m;
	const unsigned char	*nn;

	m = (const unsigned char *)s1;
	nn = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (m[i] != nn[i])
		{
			return (m[i] - nn[i]);
		}
		i++;
	}
	return (0);
}
