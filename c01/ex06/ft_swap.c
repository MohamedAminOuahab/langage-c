#include <stdio.h>

void  ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 12;
	int b = 100;

	printf("avent swap A = %d et B = %d \n",a , b);
	ft_swap(&a, &b);
	printf("apres swap A = %d et B = %d",a , b);
       return 0;	
}
