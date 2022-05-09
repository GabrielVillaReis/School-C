#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int i;

    printf("Table ASCII:\n");

    for ( i = 0; i < 127; i++ )
    {
        printf("Decimal: %i\tOctal: %o\tHexadecimal: %x\t\t", i, i, i);

        if (i > 32)
            printf("Caractere: %c",i);

        printf("\n");
    }
    
    return 0;
}
