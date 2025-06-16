int	is_power_of_2(unsigned int n)
{
    int num = n;
	int	mult = 1;

    if (num <= 0)
        return (0);
	while (mult <= num)
    {
        if (mult == num)
            return(1);
        mult *=2;
    }
    return (0);
}