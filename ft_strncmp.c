/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:13:06 by mndir             #+#    #+#             */
/*   Updated: 2022/05/16 14:06:45 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc;
	unsigned char	*cc;

	sc = (unsigned char *)s1;
	cc = (unsigned char *)s2;
	i = 0;
	while ((sc[i] || cc[i]) && (i < n))
	{
		if (sc[i] < cc[i])
		{
			return (-1);
		}
		else if (sc[i] > cc[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
// int main ()
// {
//     char s1[] = "abcb";
//     char s2[] = "abc";
//     printf("%d", ft_strncmp(s1, s2, 3));
// }
