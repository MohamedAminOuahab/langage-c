#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
       while(src[i])
       {
	       dest[i] = src[i];
	       i++;
       }
       dest[i]= '\0';
       return (dest);
}

int main(void)
{
	char a[]= "amin";
	char b[]="baltigo";
	printf("%s",ft_strcpy(a,b));
}
