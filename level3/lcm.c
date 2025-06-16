unsigned int    lcm(unsigned int a, unsigned int b)
{
    int num1 = a;
    int num2 = b;
    int res1 = 1;
    int res2 = 0;
    int i = 1;
    int j = 1;
    if (num1 <= 0|| num2 <= 0)
        return (0);

    while (res1 != res2)
    {
        res1 = num1 * i;
        res2 = num2 * j;
        if (res1 > res2)
            j++;
        else
            i++;    
    }
    return (res1);
}