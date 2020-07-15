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
	if(nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr/10);
		ft_putchar(nbr % 10 + 48);
	}
}
int	ft_iterative_factorial(int nb)
{ 
	int fact;
	int i;

	i = 1;
	fact = nb;
	while(nb > 1)
	{
		fact = fact * (nb - 1); 
			nb--;
		ft_putnbr(fact);
		ft_putchar('\n');
		i++;
	}
	return fact;
}
