#include <unistd.h>
#include <stdio.h>
#include "fonctions.h"

/*void	print_top_bot(char c, char d, int h)
{
	int i;
	i = 2;
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

void	print_middle(char c, char d,int x, int y)
{
	int i;

	i = 0;
	while (y-- > 2)
	{
		ft_putchar(c);
		
		i = 3;
		
		while (x >= i && x != 1)
		{
			ft_putchar(d);
			i++;
			
			
		}
		if (x != 1)
		{
		ft_putchar(c);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	else if (x == 1 && y == 1)
		ft_putchar('o');
	else if (x == 1 && y != 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		print_middle('|', ' ', x, y);
		ft_putchar('o');
	}
	else if (y == i && x != i)
	{
		print_top_bot('o', '-', x);
		i++;
	}
	j = 1;
	while ((i < x && j < y))
	{
		print_top_bot('o', '-', x);
		print_middle('|', ' ', x, y);
		i++;
		print_top_bot('o', '-', x);
		return ;
	}
}

int	main(void)
{
	//rush(5, 3);
	//rush(5, 1);
	//rush(10, 10);
	//rush(1, 5);
	rush(1, 10);
	return (0);
}	*/

#include <unistd.h>
#include <stdio.h>
#include "fonctions.h"

void	rush_racc(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	else if (x == 1 && y == 1)
		ft_putchar('o');
}

void	print_top_bot(char c, char d, int h)
{
	int i;
	i = 2;
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

void	print_middle(char c, char d,int x, int y)
{
	int i;

	i = 0;
	while (y-- > 2)
	{
		ft_putchar(c);
		
		i = 3;
		
		while (x >= i && x != 1)
		{
			ft_putchar(d);
			i++;
		}
		if (x != 1)
		{
		ft_putchar(c);
		}
		ft_putchar('\n');
	}
	
	
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	
	rush_racc(x, y);
	if (x == 1 && y != 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		print_middle('|', ' ', x, y);
		ft_putchar('o');
		ft_putchar('\n');

	}
	else if (y == i && x != i)
	{
		print_top_bot('o', '-', x);
	}
	j = 1;
	while ((i < x && j < y))
	{
		print_top_bot('o', '-', x);
		print_middle('|', ' ', x, y);
		print_top_bot('o', '-', x);
		i++;
		return ;
	}
}

int	main(void)
{
	rush(1, 10);
	return (0);
}	