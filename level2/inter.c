#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        int j;
        char *ascii[128] = {0};
        while (argv[1][i])
        {
            j = 0;
            while(argv[2][j])
            {
                if(argv[1][i] == argv[2][j] && !ascii[(int)argv[1][i]])
                {
                    write (1, &argv[1][i], 1);
                    ascii[(int)argv[1][i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}