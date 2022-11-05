#include <stdlib.h>

int	ft_ultmate_range(int **range , int	min, int	max)
{
	int	i;
	if(min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(( sizeof(int) * (max - max)));
	if(!*range)
		return (-1);
	i = 0;
	while(i < max - min)
	{
		(*range)[i] = min + i;
		i++;

	}
	return(i);
}

