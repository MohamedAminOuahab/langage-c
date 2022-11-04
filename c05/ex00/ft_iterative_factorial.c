#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	size_t  	i;
	size_t		j;

	i = 1;
	j = 1;
	while(i <= nb)
	{
		j = i * j ;
		i++;
	}
	return (j);	
}

int	main(void)
{
	printf("%d",ft_iterative_factorial(42));
	return (0);
}
