#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}	

int main(int ac , char **av)
{
	printf("%s",ft_strcat(av[1],av[2]));
	return 0;

}
