/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanto <luisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:22:13 by luisanto          #+#    #+#             */
/*   Updated: 2023/08/11 15:00:25 by luisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	if (!s || !f)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		f(count, s + count);
		count++;
	}
}

/*
** void my_func(unsigned int i, char *str)
** {
** 	printf("My inner function: index = %d and the string is %s\n", i, str);
** }
**
** int main()
** {
** 	char str[10] = "Hello.";
** 	printf("The result is %s\n", str);
** 	ft_striteri(str, my_func);
** 	printf("The result is %s\n", str);
** 	return 0;
** }
*/