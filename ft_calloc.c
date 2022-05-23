/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:30:34 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 09:02:31 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	i = malloc(count * size);
	if (count > SIZE_MAX / size)
	{
		return (NULL);
	}
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!i)
		return (NULL);
	else
		ft_bzero(i, count * size);
	return (i);
}
