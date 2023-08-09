/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:32:58 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 16:00:21 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == c)
			return ((char *)s + count);
		count++;
	}
	if (!c && s[count] == '\0')
		return ((char *)s + count);
	return (NULL);
}