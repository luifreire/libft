/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:36:24 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 14:07:58 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && (int)n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}

/*
** int main () {
**    char str1[15] = "ABCdef";
**    char str2[15] = "ABCDEF";
**    int result;
**
**    result = ft_strncmp(str1, str2, 3);
**    if(result < 0) {
**       printf("str1 is less than str2\n");
**    } else if(result > 0) {
**       printf("str2 is less than str1\n");
**    } else {
**       printf("str1 is equal to str2\n");
**    }
**    printf("Value returned by strncmp() is: %d\n", result);
**    return(0);
** }
*/