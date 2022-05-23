/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:13:10 by mndir             #+#    #+#             */
/*   Updated: 2022/05/21 21:46:36 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t l)
{
	size_t	i;

	i = 0;
	if (*n == '\0')
	{
		return ((char *)s);
	}
	i = ft_strlen((char *)n);
	while (*s != '\0' && l-- >= i)
	{
		if (*s == *n && ft_memcmp(s, n, i) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
