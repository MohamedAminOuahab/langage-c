#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char	 **str)
{
	int	i;
	int	j;

	i =	1;
	while(str[i])
	{
		j =	0;
		while(str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int	ac, char	**av)
{
	int i;
	int j;
	char *tmp;

	i = 1;
	while(i < ac)
	{
		j = 1;
		while(j < ac)
		{
			if(ft_strcmp(av[i],av[j]) < 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_putstr(av);

	
}
