#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
	if(nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if(nbr > 9)
	{
		ft_putchar(nbr/10);
		ft_putnbr(nbr % 10 + 48);
	}
	else
		ft_putnbr(nbr + 48);
}
int	ft_recursive_factorial(int nb)
{
	int fact;
	int nb;
	nb = 1;

	fact = fact * ft_recursive_factorial(fact - 1);
	if(nb == 1)
	{
		return(1);
	}	
	else
		return fact * ft_recursive_factorial(fact - 1)
}
