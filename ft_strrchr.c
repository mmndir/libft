/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:13:14 by mndir             #+#    #+#             */
/*   Updated: 2022/05/20 17:41:01 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char)c == s[i])
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}

// int main()
// {
//     char t[] = "hello 42help";
//     printf("%s", ft_strrchr(t, 'h'));
// }