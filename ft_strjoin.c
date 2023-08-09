/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:30:27 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/09 13:59:09 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char const *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		s_s2;

	i = 0;
	s_s2 = 0;
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		dest[i] = s1[i];
		i++;
	}
	while (s_s2 < ft_strlen(s2))
	{
		dest[i] = s2[s_s2];
		i++;
		s_s2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int main()
{
  char  first[] = "hey now";
  char  second[] = "this is";

  char* dest = ft_strjoin(first, second);

  printf("%s\n", dest);

  return 0;
}


  printf("%s\n", dest);

  return (0);
} */
