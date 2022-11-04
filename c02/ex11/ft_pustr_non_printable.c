#include <unistd.h>


void 	ft_putnbr_base_16(int  nb)
{
	if(nb > 9)
		ft_putnbr_base_16(nb / 16);
	write(1,&"0123456789ABCDEF"[nb % 16],1);

}

void	ft_pustr_non_printabe(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < 32 || str[i] == 127)
		{
			write(1,"\\",1);
			ft_putnbr_base_16(str[i]);
		}
		else
			write(1, &str[i],1);
		i++;
	}
}

int	main(void)
{
	ft_pustr_non_printabe("Coucou\ntu\nvas\tbien");
	return 0;
}
