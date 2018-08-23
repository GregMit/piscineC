#include <stdio.h>
#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "1234";
	char s2[] = "111";
	unsigned int n = 3;
	printf("%d", ft_strncmp(s1, s2, n));
}
