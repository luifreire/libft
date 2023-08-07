/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:34:07 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/07 13:39:29 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	s2 = (char*)malloc(sizeof(char) *ft_strlen(s1) + 1);
	if (!(s2))
		return (NULL);
	while (s1[start] == set[start])
	{
		
	}	
}