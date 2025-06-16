#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int repeat;

        while(argv[1][i])
        {
            repeat = 0;
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		    {
                if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				    repeat = argv[1][i] - 'a' + 1;
                else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				    repeat = argv[1][i] - 'A' + 1;
                while (repeat > 0)
                {
                    write(1, &argv[1][i], 1);
                    repeat--;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}