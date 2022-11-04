#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t i;

	i = 0;
	while(src[i] && i < size)
	{
		if(i < size)
		       dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int main(int ac , char **av)
{
	printf("%d",ft_strlcpy(av[1], av[2] ,255));
	return 0;
}
