/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:51:25 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/07 13:52:42 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	digits;
	long int	num;

	num = n;
	digits = get_digits(n);
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
