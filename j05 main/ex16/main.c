#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char dest[] = "gre";
	char src[] = "gmit";
	printf("%s", ft_strcat(dest, src));
}
