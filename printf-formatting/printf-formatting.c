#include <stdio.h>

int main()
{
    char c = 0x6A;  // ASCII j
    printf("ASCII Value %c\n", c);
    printf("HEX Value %x\n", c);
    printf("HEX Value %X\n", c);
    printf("HEX Value %#x\n", c);
    printf("HEX Value %#X\n", c);
    
	
    int a = 0b000111;
    printf("Valor = %d hex %x\n", a,a);
	
	a = 0xa3;
    printf("Valor = %d hex %x", a,a);
    return 0;
}