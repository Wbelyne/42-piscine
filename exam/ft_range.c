#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	j;
	int	r;

	r = max - min;
	j = 0;
	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	while (r < 0)
	{
		dest[j++] = max - r;
		r--;

	}
	return (dest);
}

int *ft_range(int min, int max);

int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of the correct size manually ! Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);

	range = ft_range(3, 3);

	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}
