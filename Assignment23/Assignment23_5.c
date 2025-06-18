/*
Accept one character then display its corresponding octal decimal and hex value
*/

#include <stdio.h>

void Display(char ch)
{
    printf("%d\t%o\t%X\n",ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the characcter\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}