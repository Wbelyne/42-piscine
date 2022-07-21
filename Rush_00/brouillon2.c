/*#include "fonctions.h"

void	rushi(char c, char d, int i,  int h)
{
	ft_putchar(c);
	while (i < h && h > 1)
	{
		ft_putchar(d);
		i++;
	}
	if (h > 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	j = 1;
	while (i <= x || j <= y)
	{
		if (i == 1 || i == x)
		{
			rushi('o', '-', j, x);
			i++;
		}
		else
		{
			rushi('|', ' ',i, x);
			i++;
		}
	}
}

int	main(void)
{
	rush(5, 3);
	return (0);
}	
*/