/*
Enter string
Marvellous Multi OS
Enter the character
M
The frequency of character is 2

*/

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet = CountChar(Arr,cValue);

    printf("The frequency of character is %d\n",iRet);

    

    return 0;
}