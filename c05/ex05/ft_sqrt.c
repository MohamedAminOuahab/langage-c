#include <stdio.h>
#include <stdlib.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (i >= 2)
	{
		while (i <= (nb / i))
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d",ft_sqrt(atoi(av[1])));
	return 0;
}
