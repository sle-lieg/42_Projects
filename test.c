#include <stdio.h>
#include <stdlib.h>

char	*ft_init(void)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * 5);
	return (ptr);
}

void	ft_fill(char *ptr)
{
	int i;


}

int		main()
{
	char *str;
	int i;

	str = ft_init();
	ft_fill(str);
	for (i = 0; i < 5; i++)
	{
		str[i] = i + 'a';
		printf("addresse de str + i : %p\n", &str + i);
		printf("valeur de str + i : %p\n", str + i);
		printf("valeur pointee par str + i : %c\n", *(str + i));
	}
	if (!str)
	{
		printf("str est NULL");
		return (0);
	}
	printf("addresse de str : %p\n", &str);
	printf("valeur de str : %p\n", str);

	return (0);
}
