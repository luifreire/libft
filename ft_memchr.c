/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:11:38 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 14:58:51 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = (char *)malloc(sizeof(char) * (n + 1));
	count = 0;
	if (!(str))
		return (NULL);
	while (count < n)
	{
		if (str[count] == s[count])
			return (str);
		if ((unsigned char)str[count] == (unsigned char)c)
			return ((char *)s + count);
		count++;
	}
	return (NULL);
}
