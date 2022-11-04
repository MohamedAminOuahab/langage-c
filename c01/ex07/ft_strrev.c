#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	ft_strrev(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while(str[i])
	{
		write(1, &str[i], 1);
		i--;
	}

	return (str[i]);
}

int	main(void)
{
	char a[] = "amin";
      	
	ft_strrev(a);
	return 0;
}
