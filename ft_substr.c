/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:38:26 by luisanto          #+#    #+#             */
/*   Updated: 2023/07/20 15:10:46 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
  unsigned int  i;
  unsigned int total;

	start = 0;
  i = 0;
  total = *s;

	if (len != 0 && s[i] && start < total)
	{
    dest = malloc(sizeof(char) * (len) + sizeof(char));
    while (start < len && (*(s + i) != '\0'))
    {
      start++;
      i++;
    }
      return (dest);
	}  
  else
    return (NULL);
}

#include<stdio.h>

int main()
{
    char src[] = "help me dude";
 
    int start = 2;
    int end = 4;
 
    char* dest = ft_substr(src, start, end);
 
    printf("%s\n", dest);
 
    return 0;
}
