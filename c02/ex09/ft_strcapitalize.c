#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if((str[i - 1] > 31 && str[i - 1] < 48) && (str[i] >= 'a' && str[i] <= 'z')) 
		       str[i] -= 32;
		if(str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
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
		printf("%s",ft_strcapitalize(av[i]));
		i++;
	}
	return 0;
}
