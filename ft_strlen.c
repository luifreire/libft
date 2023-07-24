//42 header//

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

#include<stdio.h>

int main()
{
  int count;
  
  char stuff[] = "get it baby girl";
  
  count = ft_strlen(stuff);

  printf("%d\n", count);

  return 0;
}
