#include <unistd.h>

void    ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc ==  2)
    {
        int n = atoi(argv[1]);
        int i = 1;
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(i * n);
            if (i < 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}