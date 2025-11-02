#include "libft.h"

int main()
{
	char *str = ft_itoa(-42);
	int i = -1;

	while (str[++i])
		printf("caractere %i : %c \n", i + 1, str[i]);
}