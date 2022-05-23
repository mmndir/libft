/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:40:25 by mndir             #+#    #+#             */
/*   Updated: 2022/05/15 16:45:53 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cs;

	i = 0;
	str = (char *)s;
	cs = (unsigned char)c;
	while (i < n)
	{
		if (cs == str[i])
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char t[6] = {'h','e','l','l','o'};
//     char *p = ft_memchr(t, 'e', 6);
//     printf("%s", p);
// }