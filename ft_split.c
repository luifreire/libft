/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:51:29 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 17:08:45 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	**ft_split(char const *s, char c)
{
	int count;
	char *s2;
	
	s2 = (char *)malloc(sizeof(char) * count + 1);
	if (!(s2))
		return (NULL);
	while (s[count] != c)
		count++;
	return (s2);
}
