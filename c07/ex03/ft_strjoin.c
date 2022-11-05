#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i =	0;
	while(str[i])
		i++;
	return (i);
}
//------------------------------------------------------STRLEN POUR CONTER LA LANGUER D'UNE STR---------------------------------------------------//

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 	0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//---------------------------------------------------STRCPY POUR AIDE STRCAT A CONCATENER DEUX STR------------------------------------------------//

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

//---------------------------------------------------------STRCAT VA CONCATENER DEUX STR----------------------------------------------------------//

int	ft_parme_size(int	size, char	**str, char	*sep)
{
	int	i;
	int	res;

	
	if(size == 0)
		return (1);
	i = 0;
	res = 0;
	while(i < size)
		res += ft_strlen(str[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

//-----------------------------------------------FT_PARME_SIZE VA DONNE LA LONGEUR DES PARAMETRE--------------------------------------------------//

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	int	i;
	char	*str;

	str 	= malloc(ft_parme_size(size, strs, sep) * sizeof(char));
	str[0] = 0; 
	i = 0;
	if(!str)
		return(NULL);
	if(size == 0)
		return (str);
	while(i < size)
	{
		ft_strcat(str, strs[i]);
		       if(i != size - 1)
				ft_strcat(str, sep);
		i++;	       
	}
	str[ft_strlen(str)] = 0; 
	return (str);
}

//-----------------------------------------------STRJOIN VA CONCATENER A L AIDE D'UN SEP----------------------------------------------------------//

int	main(void)
{
	char *str[]= {"amine", "bonjour", "cava"};
	printf("%s\n",  ft_strjoin(3, str,"------"));
	return (0);
}
