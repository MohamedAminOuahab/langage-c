#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return (1);
	while(str[i])
	{
		if(str[i] > 31 && str[i] < 127)
			return (1);
		else
			return (0);
		i++;
	}
}

int	main(int ac , char **av)
{
	int i;

	i = 1;
	while(av[i])
	{
		printf("%d \n",ft_str_is_printable(av[i]));
		i++;
	}
	if(ac < 2)
		printf("%d ",ft_str_is_printable(""));
	return (0);
}
