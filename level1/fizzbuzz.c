#include <unistd.h>

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(void)
{
    int n = 1;
    while (n <= 100)
    {
        if (n % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (n % 3 == 0)
            write(1, "fizz", 4);
        else if (n % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(n);
        n++;
        write(1, "\n", 1);
    }
}