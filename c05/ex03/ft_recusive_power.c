#include <stdio.h>

int	ft_recusive_power(int nb, int	power)
{
	int res;

	res = nb;
	if(power == 0 && nb == 0)
		return (1);
	if(power < 0)
		return (0);
	if(power > 1)
		return(nb *= ft_recusive_power(nb, power -1));
	return (res);
}

int	main(void)
{
	printf("%d",ft_recusive_power(5, 2));
	return 0;
}
