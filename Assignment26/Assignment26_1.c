/*
Enter string
Marvellous
Enter the character
e
Character is found

*/

#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    return(*str == ch);
}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character is found\n");
    }
    else
    {
        printf("Character is not found\n");
    }

    

    return 0;
}