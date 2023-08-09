/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:33:57 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 15:31:25 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char const *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	c_dst;
	size_t	c_scr;

	c_dst = 0;
	c_scr = 0;
	while (dst[c_dst] && c_dst < size)
		c_dst++;
	while ((src[c_scr]) && ((c_dst + c_scr + 1) < size))
	{
		dst[c_dst + c_scr] = src[c_scr];
		c_scr++;
	}
	if (c_dst != size)
		dst[c_dst + c_scr] = '\0';
	return (c_dst + ft_strlen(src));
}

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	char *mine;
	char *theirs;
	
	if (argc == 2)
	{
		mine = (argv[1]);
		theirs = strlcat(argv[1]);
		printf("mine: %s | theirs: %s\n", ft_strlcat(mine), strlcat(theirs));
	}
	return (0);
}
