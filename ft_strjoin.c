//42 header//

#include<stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
  char  *dest;
  int  s_s1;
  int  s_s2;
  int i;

  s_s1 = 0;
  s_s2 = 0;
  i = 0;

  if (s_s1 != '\0' && s_s2 != '\0')
  {
    s_s1 = -1;
		while (s1[++s_s1])
			dest[i] = s1[s_s1];
		s_s2 = -1;
		while (s2[++s_s2])
		{
			dest[i] = s2[s_s2];
			i++;;
    }
    dest = (char*)malloc(sizeof(char) * (s_s1 + s_s2 + 1)); 
    return (dest);
  }
  else
    return (NULL);
}
#include<stdio.h>

int main()
{
  char  first[30] = "hey now";
  char  second[30] = " this is";

  char* dest = ft_strjoin(first, second);

  printf("%s\n", dest);

  return 0;
}
