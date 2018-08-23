#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char dest[] = "bonjour";
	char src[] = "salut";
	printf("%s", ft_strcpy(dest, src));
}
	
