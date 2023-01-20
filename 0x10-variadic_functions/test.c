#include <stdio.h>

int count_place(int n)
{
	if (n < 10)
		return (1);

	return (10 * count_place(n / 10));
}

int main(void)
{
	int n = 1024, places;

	places = count_place(n);

	printf("%d\n", places);
}
