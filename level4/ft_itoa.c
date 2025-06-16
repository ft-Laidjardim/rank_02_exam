#include <stdlib.h>

int count_digits(long n)
{
    int count = 0;

    if (n <= 0)
    {
        count++;
        n *= -1;
    }
    while (n)
    {
        count++;
        n /= 10;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    long n = nbr;
    int len = count_digits(n);
    char *num = malloc (sizeof(char) * (len + 1));
    if(!num)
        return (NULL);
    num[len--] = '\0';
    if (n == 0)
    {
        num[0] = '0';
        return (num);
    }
    if (n < 0)
    {
        num[0] = '-';
        n *= -1;
    }
    while (n)
    {
        num[len] = n % 10 + '0';
        len--;
        n /= 10;
    }
    return (num);
}
/*
#include <stdio.h>
int main (void)
{
    int n = 16;
    printf("%s", ft_itoa(n));
}*/