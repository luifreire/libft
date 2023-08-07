/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:41:06 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/07 12:12:10 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/* 
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
} */
