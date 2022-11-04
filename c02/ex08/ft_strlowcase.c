#include <stdio.h>

char	*ft_strlowase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	while(av[i])
	{
		printf("%s \n", ft_strlowase(av[i]));
		i++;
	}
}
