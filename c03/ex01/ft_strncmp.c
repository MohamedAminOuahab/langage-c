#include <stdio.h>

int ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] != '\0' && i < n)
		i++;
	if(s1[i] - s2[i] < 0)
		return -1;
	else if (s1[i] - s2[i] > 0)
		return 1;
	return 0;
}

int main(int ac , char **av)
{
	printf("%d",ft_strncmp(av[1], av[2], 4));
	return 0;
}
