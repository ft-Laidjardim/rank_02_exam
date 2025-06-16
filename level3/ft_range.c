#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len;
    int i = 0;
    int dir;
    int *tab;

    if (end > start)
    {
        len = end - start + 1;
        dir = 1;
    }
    else
    {
        len = start - end + 1;
        dir = -1;
    }
    tab = malloc(sizeof(int) * len);
    while (i < len)
    {
        tab[i] = start;
        start += dir;
        i++;
    }
    return (tab);
}

