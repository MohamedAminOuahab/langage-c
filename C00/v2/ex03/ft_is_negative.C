#include <unistd.h>

void	ft_is_negative(int nb)
{
	if(nb >= 0)
		write(1, "P", 1);
	if (nb < 0)
		write(1, "N", 1);
}

int	main(void)
{
	
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_is_negative(-42);
	write(1, "\n", 1);
	ft_is_negative(0);
	return (0);

}
