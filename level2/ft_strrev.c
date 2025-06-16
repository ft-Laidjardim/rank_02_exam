#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len = 0, i = 0, temp;

	while (str[len++]);
	while (i < (len - 1))
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}