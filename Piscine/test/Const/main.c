#include <stdio.h>

int	fct(const int *tab, int size);

int	main(void)
{
	int tab[] = {4, 90, 0, 8, 7, 0};

	printf("%d", fct(tab, 6));
	return (0);
}
