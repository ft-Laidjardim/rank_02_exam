#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int ascii[128] = {0};
        int i = 0;
        int j = 0;

        while (argv[1][i])
        {
            if (ascii[argv[1][i]] == 0 && argv[1][i])
            {
                write(1, &argv[1][i], 1);
                ascii[argv[1][i]] = 1;
            }
            i++;
        }
        while (argv[2][j])
        {
            if (ascii[argv[2][j]] == 0 && argv[2][j])
            {
                write(1, &argv[2][j], 1);
                ascii[argv[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
}