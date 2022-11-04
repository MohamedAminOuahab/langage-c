#include <stdio.h>

int	ft_str_is_upercase(char	*str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return (1);
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		else
			return (0);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	while(av[i])
	{
		printf("%d \n",ft_str_is_upercase(av[i]));
		i++;
	}
	if(ac < 2)
		printf("%d",ft_str_is_upercase(""));
	return 0;


}
