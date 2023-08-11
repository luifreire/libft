/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:31:12 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 13:30:53 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* #include<stdio.h>

int main()
{
  int count;
  
  char stuff[] = "get it baby girl";
  
  count = ft_strlen(stuff);

  printf("%d\n", count);

  return 0;
} */