#include<unistd.h>

void ft_putstr(char *c)
{
	write(1, &c, 1);	
}

void ft_print_alphabet(void)
{
	char *a ;
	
	a = 'z';
	while(a >= 'a')
	{
		ft_putstr(a);
		a--;
	}
}

int main (void)
{
	ft_print_alphabet();
	return 0;
}
