/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:44:52 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 10:49:16 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main()
{
    char byte[5] = {1, 'j', 3, 4, 5};
    ft_bzero(byte, 5);
    int i = 0;
    while (i < 5)
    {
        printf("%d,", byte[i]);
        i++;
    }
    return (0);
}
*/