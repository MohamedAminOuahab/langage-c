#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			return (1);
		else
			return (0);	
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1; 
	printf("%d",ft_str_is_numeric(av[i]));
	return 0;
}
