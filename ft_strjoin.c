/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:42:24 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 15:04:53 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ij;
	char	*j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!j)
		return (NULL);
	i = 0;
	ij = 0;
	while (s1[i])
	{
		j[ij++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j[ij++] = s2[i];
		i++;
	}
	j[ij] = 0;
	return (j);
}
