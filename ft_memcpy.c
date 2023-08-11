/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:31:33 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 14:57:39 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*d;
	char	*s;

	count = 0;
	d = (char *)dest;
	s = (char *)src;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}

/*
** int main()
** {
** 	char dst[100] = "Libc is";
** 	char src[100] = "the standard library.";
**
** 	ft_memcpy(dst, src, sizeof(src));
** 	printf("dst after memset(): %s\n", dst);
** 	return 0;
** }
*/