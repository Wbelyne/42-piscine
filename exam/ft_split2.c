#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define WD_NUM 1000
char	**ft_split(char *str)
{
	char	**dest;
	int	i2;
	int	i3;
	int	i;

	dest = (char**)malloc(sizeof(**dest) * WD_NUM);
	i2 = 0;
	i3 = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			dest[i2] = (char*)malloc(sizeof(char) * WD_NUM);
			while (str[i] > 32)
			{
				dest[i2][i3] = str[i];
				i3++;
				i++;
			}
			dest[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
		

	}
	dest[i2] = 0;
	return (dest);
}

int	main(void)
{
	char	**arr;
	char	*phrase;
	phrase = "je suis un heros";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	return (0);

}
