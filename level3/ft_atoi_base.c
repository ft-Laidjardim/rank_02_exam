int is_valid(char c, int str_base)
{
    char *max = "0123456789ABCDEF";
    char *min = "0123456789abcdef";
    int i = 0;
    
    while (i < str_base)
    {
        if (c == max[i] || c == min[i])
            return (1);
        i++;
    }
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int is_neg = 1;
    int res = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        is_neg *= -1;
        i++;
    }
    while (str[i] && is_valid(str[i], str_base))
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res += str[i] - '0';
        else if  (str[i] >= 'a' && str[i] <= 'z')
            res += str[i] -'a' + 10;
        else if  (str[i] >= 'A' && str[i] <= 'Z')
            res += str[i] -'A' + 10;
        i++;
    }
    return (res * is_neg);
}