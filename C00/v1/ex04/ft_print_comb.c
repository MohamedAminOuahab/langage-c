#include <unistd.h>

void	ft_print_comb(void)
{
	char dix;
	char unit;
	char cent;
	
	unit = '0';
	while (unit <= '9')
	{
		dix = unit + 1;
		while(dix <= '9')
		{
		   cent = dix + 1;
		   while(cent <='9')
		   {
		   	write(1, &unit, 1);
		    write(1, &dix, 1);
		    write(1, &cent, 1);
		    if(!(unit == '7' && dix == '8' && cent == '9'))
		    	write(1, ", ", 2);
		    cent++;
		   }
		   dix++;
		}
		
		unit++;
	} 
}

int main(void )
{
	ft_print_comb();
	return 0;
}
