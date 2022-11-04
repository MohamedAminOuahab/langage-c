#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1 , &c, 1);
}

void	ft_print_program_neme(char	*str)
{
	int	i;

	i =	0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int	ac, char	**av)
{
	ft_print_program_neme(av[0]);
	return (0);
}
