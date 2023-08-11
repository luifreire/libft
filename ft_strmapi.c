/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:18:54 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 15:04:47 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	count;

	if (!s)
		return (NULL);
	count = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (new == NULL)
		return (NULL);
	while (s[count] != '\0')
	{
		new[count] = f(count, s[count]);
		count++;
	}
	new[count] = '\0';
	return (new);
}

/*
** char my_func(unsigned int i, char str)
** {
** 	printf("My inner function: index = %d and %c\n", i, str);
** 	return str - 32;
** }
**
** int main()
** {
** 	char str[10] = "hello.";
** 	printf("The result is %s\n", str);
** 	char *result = ft_strmapi(str, my_func);
** 	printf("The result is %s\n", result);
** 	return 0;
** }
*/