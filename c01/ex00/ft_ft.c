#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 124;
}

int main(void)
{
	int a = 12;
	printf("%d\n",a);
	ft_ft(&a);
	printf("%d",a);
	return 0;
}
