/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:48:28 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 14:30:36 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
 


 
#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int mine;
	int theirs;
	
	if (argc == 2)
	{
		mine = ft_atoi(argv[1]);
		theirs = atoi(argv[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
}