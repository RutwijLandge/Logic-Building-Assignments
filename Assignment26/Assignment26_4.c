/*
Enter string
Marvellous Multi OS
Enter the character
M
The index of character is 11

Enter string
Marvellous Multi OS
Enter the character
W
The index of character is -1



*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = -1;
    int iIndex = -1;
    while (*str != '\0')
    {
        iPos++;
        if(*str == ch)
        {   
            iIndex = iPos;        
        }
        str++;
    }
    return iIndex;
}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("The index of character is %d\n",iRet);

    return 0;
}