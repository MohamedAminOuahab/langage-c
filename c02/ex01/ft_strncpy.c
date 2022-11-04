#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

int main(void)
{
	char a[] = "amin";
	char b[] = "mohamed";

	printf("%s",ft_strncpy(a,b,5));
	return 0;
}
