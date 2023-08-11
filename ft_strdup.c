/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:22:18 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 13:30:20 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new;
	int		count;

	count = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	while (*src)
		new[count++] = *src++;
	new[count] = '\0';
	return (new);
}
/* 
#include<stdio.h>
#include<string.h>

int	main(int argc, char **argv)
{
	char *mine;
	char *theirs;
	
	if (argc == 2)
	{
		mine = ft_strdup(argv[1]);
		theirs = strdup(argv[1]);
		printf(":%s:\n:%s:\n", mine, theirs);
	}
	return (0);
} */