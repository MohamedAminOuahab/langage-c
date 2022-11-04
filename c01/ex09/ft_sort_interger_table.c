#include <stdio.h>


void	ft_sort_integer_table(int	*tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i < size && tab[i])
	{
		while( j < size)
		{	
			if(tab[i] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	
	}	
}

int  main(void)
{
	int a[10]= {14,13,16,27,1,2,11,10,24};
	int i = 0;

	while(a[i])
	{
		ft_sort_integer_table(a,10);
		printf("%d , ",a[i]);
		i++;
	}
	return 0;
}
