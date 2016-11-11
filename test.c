#include <stdio.h>
#include <stdlib.h>

char	**ft_init(void)
{
	char **ptr;
	int i;

	i = 0;
	ptr = malloc(sizeof(*ptr) * 5);
	for (; i < 5; i++)
		ptr[i] = malloc(sizeof(**ptr) * 5);
	return (ptr);
}

void	ft_fill(char **ptr)
{
	int i;
	int j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			ptr[i][j] = i + j + 'a';
}

int		main()
{
	char **str;
	int i;

	str = ft_init();
	ft_fill(str);
	for (i = 0; i < 5; i++)
	{
//		str[i] = i + 'a';
		printf("addresse de str + i : %p\n", &str + i);
		printf("valeur de str + i : %p\n", str + i);
		printf("valeur pointee par str + i : %s\n", *(str + i));
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
