#include <stdio.h>

int	ft_check_base(char	*str)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		if(str[i] == '-' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (1);
		j = 0;
		while(str[j])
		{
			if(i == j)
			{
				j++;
				continue;
			}
			if(str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char	*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);

}

int	ft_find_in_base(char	c, char	*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(c == str[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char	*str, char	*base) 
{
	int	i;
	int	res;
	int	sign;
	
	i = 0;
	res = 0;
	sign = 1;	
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] && (ft_is_in_base(str[i], base) && ft_check_base(base)))
	{
		res = (res * ft_check_base(base));
		res += ft_find_in_base(str[i], base);
		i++;	
	}
	return (res * sign);
}
int	main(void)
{
	printf("%d",ft_atoi_base("mmm","amin"));
	return 0;
}
