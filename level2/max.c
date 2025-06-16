int		max(int* tab, unsigned int len)
{
    int n = tab[0];
    int i = 0;
    while (i < len)
    {
        if (tab[i] > n)
            n = tab[i];
        i++;
    }
    return (n);
}