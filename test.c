#include "libft.h"

int main()
{
	char	*str;
	char	*test;
	str = ft_strdup("Hello");
	test = str + 3;
	ft_printf("Copy done by memmove: %s\n", ft_memmove(test, str, 5));
	return 0;
}
