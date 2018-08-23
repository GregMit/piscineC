#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "toto";
	char s2[] = "totoggfg";
	printf("%d", ft_strcmp(s1, s2));
}
