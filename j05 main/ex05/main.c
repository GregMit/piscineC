#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "salut les cops";
	char to_find[] = "les";
	printf("%s", ft_strstr(str, to_find));
}
