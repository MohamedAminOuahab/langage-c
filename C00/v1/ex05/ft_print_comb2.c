#include <unistd.h>

void ft_putchar(char *c)
{
	write(1 , &c, 1);
}

void	ft_print_comb2(void)
{
	char unit;
	char dix;
	
	unit = 0;
	while(unit <= 99)
	{
		dix = unit + 1;
		while(dix <= 99)
		{
			ft_putchar(unit / 10 +'0');
			ft_putchar(unit % 10 +'0');
			ft_putchar(' ');
			ft_putchar(dix / 10 +'0');
			ft_putchar(dix % 10 +'0');
			dix++;
			if (unit != 98 )
				write(1,", ",2);
		}
		unit++;
	}
	
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
