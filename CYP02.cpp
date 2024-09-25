#include <stdio.h>

int main()
{
    int bfSize, bfReserved1, bfReserved2, bfOffBits, bfType1, bfType2;
    scanf_s("%i%i", &bfSize, &bfOffBits);

    bfType1 = 66;      // 'B'
    bfType2 = 77;      // 'M'
    bfReserved1 = 0;   // Valor por defecto
    bfReserved2 = 0;   // Valor por defecto
    printf("%c%c%08X%04X%04X%08X", bfType1, bfType2, bfSize, bfReserved1, bfReserved2, bfOffBits);

    return 0;
}
//Y puros corridos tumbados 
