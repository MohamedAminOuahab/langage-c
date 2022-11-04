#include <stdio.h>

int	ft_strcmp(char	*s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] && s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	main(int ac, char **av)
{
	printf("%d",ft_strcmp(av[1],av[2]));
	return 0;
}
