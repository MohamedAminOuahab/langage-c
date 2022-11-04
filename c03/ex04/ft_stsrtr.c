#include <stdio.h>
char	*ft_strstr(char	*str, char	*to_find)
{
	int i;
	int j;

	i = 0;
	while(to_find[j] == '\0')
	       return (str);
	while(str[i] != '\0')
	{
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if( to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
}
int	main(int	ac, char	**av)
{
	printf("%s",ft_strstr(av[1], av[2]));
	return 0;
}
