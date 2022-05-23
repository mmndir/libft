/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:54:37 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 14:47:02 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], 1);
			i++;
		}
		if (s[i] == '\0')
		{
			write(fd, "\n", 1);
		}
	}
}

// int main ()
// {
// 	ft_putendl_fd("hello", 1);
// }