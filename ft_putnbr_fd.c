/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:12:55 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 11:01:08 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = -nb;
			ft_putnbr_fd (nb, fd);
		}
		else if (nb < 10)
		{
			c = nb + '0';
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd((nb / 10), fd);
			c = (nb % 10) + '0';
			write(fd, &c, 1);
		}
	}
}
