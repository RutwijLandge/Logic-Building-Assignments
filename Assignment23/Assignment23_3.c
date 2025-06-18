/*
Accept one character from user. if it is capital then display all the
charaacters from the input characters till Z.if input character is small
then print all the characters in reverse order till a. in other cases
return directly 
*/

#include <stdio.h>

void Display(char ch)
{
    char cPrint = '\0';
    if((ch >= 'A') && (ch <= 'Z'))
    {
        
        for(cPrint = ch; cPrint <= 'Z'; cPrint++)
        {
            printf("%c\n",cPrint);
        }
        
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cPrint = ch; cPrint >= 'a'; cPrint--)
        {
            printf("%c\n",cPrint);
        }
    }
    else
    {
        printf("%c\n",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}