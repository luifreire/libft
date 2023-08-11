/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:30:38 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 14:54:42 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			count;

	count = -1;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (++count < n && *(s1c + count) == *(s2c + count))
		;
	if (count == n)
		return (0);
	return (*(s1c + count) - *(s2c + count));
}

/*
** int main () {
**    char str1[15] = "abcdef";
**    char str2[15] = "ABCDEF";
**    int result;
**
**    result = memcmp(str1, str2, 5);
**    if(result > 0) {
**       printf("str2 is less than str1");
**    } else if(result < 0) {
**       printf("str1 is less than str2");
**    } else {
**       printf("str1 is equal to str2");
**    }
**    return(0);
** }
*/