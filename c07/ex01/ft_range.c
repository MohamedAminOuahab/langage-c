#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int	min, int	max)
{
	int	*vlr;
	int	i;

	if (min >= max)
	       return (NULL);	
	vlr = malloc(sizeof(int));
	i = 0;
	while(vlr[i] < max)
	{
		vlr[i] = min;
		min++;
		i++;
	}	
	return (vlr);
}
