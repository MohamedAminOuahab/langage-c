#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char	*src)
{
	int	i;
	char 	*dest;

	dest = malloc(sizeof(char));
	if(!dest)
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	printf("%s\n",ft_strdup(av[1]));
	printf("%s",strdup(av[1]));
	return (0);
}
