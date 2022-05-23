/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:11:33 by mndir             #+#    #+#             */
/*   Updated: 2022/05/19 10:53:08 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*bytes;

	i = 0;
	bytes = (char *)b;
	while (i < len)
	{
		bytes [i] = c;
		i++;
	}
	return (b);
}
/*
int main (int argc, char *argv[])
{
    char arr1[] = { 3, 4};
    char arr2[] = { 1, 2};
    ft_memset(arr1, 1, 2 * sizeof(char));
    printf("%d %d\n", arr1[0], arr1[1]);
    return(0);
}
*/
