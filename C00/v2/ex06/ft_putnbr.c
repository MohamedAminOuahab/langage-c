#include <unistd.h>
void ft_putchar(int c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if(nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	else if(nb == -2147483648)
		write(1, "-2147483648", 11);
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if( nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
}

int	main(void) 
{
	ft_putnbr(2147483649);
	write(1, "\n", 1);
	return 0;
}