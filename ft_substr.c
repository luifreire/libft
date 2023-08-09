/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:38:26 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 13:56:15 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dest;
	unsigned int		i;
	unsigned int		total;

	i = 0;
	total = *s;
	if (len != 0 && s[i] && start < total)
	{
		dest = malloc(sizeof(char) * (len) + sizeof(char));
		while (i < len && s[start + i])
		{
			dest[i] = s[start + i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}
/* 
#include<stdio.h>

int main()
{
    char src[] = "help me dude";
 
    int star = 5;
    int end = 6;
 
    char* dest = ft_substr(src, star, end);
 
    printf("%s\n", dest);
 
    return 0;
} */
