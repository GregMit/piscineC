#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(int ac, char **av)
{
	printf("%d", ft_str_is_alpha(av[1]));
	return (0);
}
