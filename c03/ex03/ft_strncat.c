#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char	*ft_strncat(char *dest, char *src, size_t nb)
{
	size_t i;
	size_t j;

	i = 0;
	while(dest[i])
		i++;
	j = 0;
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
	
}

int main(int ac, char **av)
{
	printf("%s", ft_strncat(av[1],av[2],4));
	
	return 0;
}
