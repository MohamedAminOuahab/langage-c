#include <unistd.h>

int 	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_is_sign(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	return 1;

}
int	ft_is_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while(str[j])
		{
			if(i == j)
			{
				j++;
				continue;
			}
			else if(str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long int	long_nbr;

	long_nbr = nbr;
	len_base = ft_strlen(base);
	if( len_base <= 1 || (ft_is_sign(base) == 0) || (ft_is_base(base) == 0))
		return ;
	if(long_nbr < 0)
	{
		long_nbr *= -1;
		write(1 , "-", 1);
	}
	if(long_nbr > len_base -1)
		ft_putnbr_base(long_nbr / len_base, base);
	write(1, &base[long_nbr % len_base], 1);

}

int main(void)
{
	ft_putnbr_base(42,"amin");
	return 0;
}
