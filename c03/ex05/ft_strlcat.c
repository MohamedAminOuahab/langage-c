#include <stdio.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int 	nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while(dest[i])
		i++;
	j = 0; 
	while(src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if(dest[i] == '\0');
		return j + i;
}

int	main(int ac, char **av)
{
	printf("%d", ft_strlcat(av[1],av[2], 4));
	printf("\n");

	return 0;
}
