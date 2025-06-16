int	ft_atoi(const char *str)
{
    int i = 0;
    int is_neg = 1;
    int res = 0;
    while(str[i] >= 0 && str[i] <= 32)
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        is_neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
   return (res * is_neg);
}