// Write a program which display Ascii table with symbol, Decimal,
// HexaDecimal and octal

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;
    for(i = 0; i <= 127; i++)
    {
        printf("%c\t%d\t%o\t%X\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}