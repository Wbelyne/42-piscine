#include <unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int a);
void	ft_putnbr(int nbr);

void	ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nbr > 0 && nbr < 10)
    {
        ft_putchar('0' + nbr);
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(nbr * -1);
    }
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

void	ft_is_negative(int a)
{
	if (a < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
