#include <stdio.h>

int 	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return (1);
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			return (1);
		else
			return (0);
		i++;
	}	
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
	printf("%d \n",ft_str_is_lowercase(av[i]));
	i++;
	}
	return 0;
}
