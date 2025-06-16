
unsigned char	reverse_bit(unsigned char octet)
{
    unsigned char novo = 0;
    int i = 7;
    while (i >= 0)
    {
        novo = novo << 1 | (octet & 1);
        octet = octet >> 1;
        i--;
    }
    return (novo);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)5);

	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}*/