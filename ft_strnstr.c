/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:38:09 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 15:04:30 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	haystack;
	size_t	needle;

	if (!(little))
		return ((char *)big);
	haystack = 0;
	needle = 0;
	while (big[haystack] == little[needle] && big[haystack] && haystack < len)
	{
		haystack++;
		needle++;
	}
	if (!little[needle])
		return ((char *)&big[haystack - needle]);
	haystack = (haystack - needle) + 1;
	return (NULL);
}

/*
** int main () {
**    const char haystack[20] = "TutorialsPoint";
**    const char needle[10] = "to";
**    char *result;
**
**    result = ft_strnstr(haystack, needle, 4);
**    printf("The substring is: %s\n", result);
**    return(0);
** }
*/