#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int	i = 0;
    int count = 0;

	while (str[i])
	{
		if (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			count++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int	i = 0, j = 0, k, l;
	
	char	**split = malloc(sizeof(char *) * (ft_count_words(str) + 1));
	if (!split)
		return (NULL);
	
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			l = 0;
			while (str[i + l] && (str[i + l] != ' ' && str[i + l] != '\t'))
				l++;
			split[j] = malloc(sizeof(char) * (l + 1));
			if (!split[j])
				return (NULL);
			k = 0;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
            {
				split[j][k] = str[i];
                k++;
                i++;
            }
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}