#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main()
{
	char dest[] = "greg";
	char src[] = "mit";
	printf("%s", ft_strncat(dest, src, 1));
}
