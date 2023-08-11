/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:35:15 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 15:05:49 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < size - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	if (count < size)
		dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
