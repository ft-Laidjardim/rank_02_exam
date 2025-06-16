#include <unistd.h>

void capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int total = argc - 1;
    int i = 1;
    if (argc <= 1)
        write(1, "\n", 1);
    while (total > 0)
    {
        capitalizer(argv[i]);
        write(1, "\n", 1);
        total--;
        i++;
    }
}