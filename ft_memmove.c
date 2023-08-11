/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:32:21 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 14:24:47 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	count;

	d = (char *)dest;
	s = (char *)src;
	count = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		count = n;
		while (count --)
			((char *)d)[count] = ((char *)s)[count];
	}
	else
	{
		count = 0;
		while (count < n)
		{
			((char *)d)[count] = ((char *)s)[count];
			count++;
		}
	}
	return (d);
}

/*
** void * memmove(void *s1, const void *s2, size_t n)
** {
**     return memcpy(s1, s2, n);
** }
*/

/*
** int main()
** {
** 	char dst[100] = "Libc is";
** 	char src[100] = "the standard library.";
** 	ft_memmove(dst, src, 5);
** 	printf("dst after memset(): %s\n", dst);
** 	return 0;
** }
*/