/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:41:40 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 15:13:05 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*j;
	char			*s1;

	s1 = (char *)s;
	if (!s)
	{
		return (NULL);
	}
	if (ft_strlen(&s[start]) < len)
	{
		len = ft_strlen(&s[start]);
	}
	j = (char *)malloc(sizeof(char) * (len + 1));
	if (!j)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s1) && s[start + i] && i < len)
	{
		j[i] = s[start + i];
		i++;
	}
	j[i] = '\0';
	return (j);
}
