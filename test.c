#include "libft.h"

int main()
{
	char	*str;
	char	*test;
	str = (char *) malloc(10);
	if (!str)
		return 1;
	str = "Hello";
	test = str + 3;
	ft_putstr_fd("Test", 1);
	//ft_printf("Manually obtained address: %p\n", str + 4);
	//ft_printf("Address obtained through ft_memchr: %p\n", ft_memchr(str, 'o', 5));
	ft_printf("Copy done by memmove with overlap: %s", ft_memmove(test, str, 5));
	return 0;
}
