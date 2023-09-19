#include <stdio.h>
#include <stdlib.h>

int	*get()
{
	int	*tab;

	tab = malloc(sizeof(int));
	return (tab);
}

int	*set()
{
	int	*lol;

	lol = malloc(sizeof(int));
	return (lol);
}

int	main(void)
{
	int	*ptr;
	int	*lol;

	ptr = get();
	*ptr = 19;
	lol = set();
	*lol = 20;
	printf("%d\n", *ptr);
	set();
	printf("%d\n", *lol);
	free(ptr);
	printf("%d\n", ptr);
	printf("%d\n", lol);
	return (0);
}
