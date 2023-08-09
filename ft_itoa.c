/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:51:25 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 14:41:48 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	gather_digits(int n)
{
	size_t	i;

	i = 1;
	while ((n /= 10))
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	digits;
	long int		num;

	num = n;
	digits = gather_digits(n);
	res = (char *)malloc(sizeof(char) * (digits + 1));
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(res))
		return (NULL);
	*(res + digits) = 0;
	while (digits--)
	{
		*(res + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int mine;
	
	if (argc == 2)
	{
		mine = (argv[1]);
		printf("mine: %s\n", ft_itoa(mine));
	}
	return (0);
}