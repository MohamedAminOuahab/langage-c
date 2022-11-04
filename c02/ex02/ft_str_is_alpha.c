#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return 1;
	while (str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z'))
			return 1;
		else
			return 0;
		i++;
	}
}

int main(void)
{
	char c[] = "";
	char b[] = "BONJOUR toi";
	char a[] = "42nike ta mere";

	printf("%d  ", ft_str_is_alpha (c));
	return 0;
}
